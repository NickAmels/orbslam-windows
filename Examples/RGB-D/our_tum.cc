/**
* This file is part of ORB-SLAM2.
*
* Copyright (C) 2014-2016 Raúl Mur-Artal <raulmur at unizar dot es> (University of Zaragoza)
* For more information see <https://github.com/raulmur/ORB_SLAM2>
*
* ORB-SLAM2 is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* ORB-SLAM2 is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with ORB-SLAM2. If not, see <http://www.gnu.org/licenses/>.
*/

#define NOMINMAX
#define BOOST_LIB_DIAGNOSTIC
#include <D:\Gebruikers\nick8\Downloads\boost_1_65_1\boost_1_65_1\boost\system\config.hpp>
#include<iostream>
#include<algorithm>
#include<fstream>
#include<chrono>
#include <pxcsensemanager.h>
#include<opencv2/core/core.hpp>
#include <ostream>
#include <Windows.h>
#include <opencv2/opencv.hpp>
#include<System.h>

using namespace std;
using namespace cv;

PXCSenseManager *pxcSenseManager;
int width = 640;
int height = 480;
bool keepRunning = true;
//int ni = 0;

Mat PXCImage2CVMat(PXCImage *pxcImage, PXCImage::PixelFormat format)
{
	PXCImage::ImageData data;
	pxcImage->AcquireAccess(PXCImage::ACCESS_READ, format, &data);

	if (!format)
		format = pxcImage->QueryInfo().format;
	//std::cout << format;
	int type;
	if (format == PXCImage::PIXEL_FORMAT_DEPTH)
		type = CV_16UC1;
	else if (format == PXCImage::PIXEL_FORMAT_RGB24)
		type = CV_8UC3;

	Mat ocvImage = cv::Mat(cv::Size(width, height), type, data.planes[0]);

	//if (format == PXCImage::PIXEL_FORMAT_YUY2)
	//	cvtColor(ocvImage, ocvImage, CV_YUV2BGR_YUY2);

	pxcImage->ReleaseAccess(&data);
	return ocvImage;
}

//void LoadImages(const string &strAssociationFilename, vector<string> &vstrImageFilenamesRGB,
//                vector<string> &vstrImageFilenamesD, vector<double> &vTimestamps);

int main(int argc, char **argv)
{
    if(argc != 3)
    {
        cerr << endl << "Usage: ./rgbd_tum path_to_vocabulary path_to_settings" << endl;
        return 1;
    }

    // Retrieve paths to images
    //vector<string> vstrImageFilenamesRGB;
    //vector<string> vstrImageFilenamesD;
    //vector<double> vTimestamps;

    // Create SLAM system. It initializes all system threads and gets ready to process frames.
    ORB_SLAM2::System SLAM(argv[1],argv[2],ORB_SLAM2::System::RGBD,true);

    // Vector for tracking time statistics
    //vector<float> vTimesTrack;

	//Define some parameters for the camera
	Size frameSize = cv::Size(640, 480);
	float frameRate = 30;

	//Initialize the RealSense Manager
	pxcSenseManager = PXCSenseManager::CreateInstance();

	//Enable the streams to be used
	pxcSenseManager->EnableStream(PXCCapture::STREAM_TYPE_COLOR, 640, 480, frameRate);
	pxcSenseManager->EnableStream(PXCCapture::STREAM_TYPE_DEPTH, 640, 480, frameRate);

	//Initialize the pipeline
	pxcSenseManager->Init();

    // Main loop
    cv::Mat imRGB, imD;
    while(keepRunning)
    {
		//Check for user input
		if (GetAsyncKeyState(27)) {
			keepRunning = false;
		}

		//Acquire the frame from the camera
		pxcSenseManager->AcquireFrame();
		PXCCapture::Sample *sample = pxcSenseManager->QuerySample();

		//Convert depth frame into an OpenCV image
		Mat frameDepth = PXCImage2CVMat(sample->depth, PXCImage::PIXEL_FORMAT_DEPTH);
		Mat frameColor = PXCImage2CVMat(sample->color, PXCImage::PIXEL_FORMAT_RGB24);
        // Read image and depthmap from file
		imRGB = frameColor;
		imD = frameDepth;
		double tframe = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
		pxcSenseManager->ReleaseFrame();

#ifdef COMPILEDWITHC11
        std::chrono::steady_clock::time_point t1 = std::chrono::steady_clock::now();
#else
        std::chrono::steady_clock::time_point t1 = std::chrono::steady_clock::now();
#endif

        // Pass the image to the SLAM system
        SLAM.TrackRGBD(imRGB,imD,tframe);

#ifdef COMPILEDWITHC11
        std::chrono::steady_clock::time_point t2 = std::chrono::steady_clock::now();
#else
        std::chrono::steady_clock::time_point t2 = std::chrono::steady_clock::now();
#endif

        double ttrack= std::chrono::duration_cast<std::chrono::duration<double> >(t2 - t1).count();

        //vTimesTrack[ni]=ttrack;
    }

    // Stop all threads
    SLAM.Shutdown();
	pxcSenseManager->Release();

    // Tracking time statistics
    //sort(vTimesTrack.begin(),vTimesTrack.end());
    //float totaltime = 0;
    //for(int ni=0; ni<nImages; ni++)
    //{
    //    totaltime+=vTimesTrack[ni];
    //}
    //cout << "-------" << endl << endl;
    //cout << "median tracking time: " << vTimesTrack[nImages/2] << endl;
    //cout << "mean tracking time: " << totaltime/nImages << endl;

    // Save camera trajectory
    SLAM.SaveTrajectoryTUM("CameraTrajectory.txt");
    SLAM.SaveKeyFrameTrajectoryTUM("KeyFrameTrajectory.txt");   
	if (MapFile.empty())
	{
		cout << "enter a name for the map: " << std::flush;
		cin >> MapFile;
		MapFile = MapFile + ".bin";
		cout << MapFile << endl;
	}
	SLAM.SaveMap(MapFile);

    return 0;
}
