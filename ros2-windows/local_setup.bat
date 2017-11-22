:: generated from ament_package/template/prefix_level/local_setup.bat.in
@echo off

:: get all packages in topological order
call:ament_get_ordered_packages _ordered_packages "%~dp0"

:: source local_setup.bat file for each package
if "%_ordered_packages%" NEQ "" (
  for %%p in ("%_ordered_packages:;=";"%") do (
    call:call_file "%~dp0share\%%~p\local_setup.bat"
  )
  set "_ordered_packages="
)

goto:eof


:: Get the package names in topological order
:: using semicolons as separators and avoiding leading separators.
:: first argument: the name of the result variable
:: second argument: the base path to look for packages
:ament_get_ordered_packages
  setlocal enabledelayedexpansion

  :: use the Python executable known at configure time
  set "ament_python_executable=C:\Python36\python.exe"
  :: allow overriding it with a custom location
  if "%AMENT_PYTHON_EXECUTABLE%" NEQ "" (
    set "ament_python_executable=%AMENT_PYTHON_EXECUTABLE%"
  )

  set "ordered_packages="
  for /f %%p in ('""%ament_python_executable%" "%~dp0_order_packages.py" "%~2\""') do (
    if "!ordered_packages!" NEQ "" set "ordered_packages=!ordered_packages!;"
    set "ordered_packages=!ordered_packages!%%p"
  )
  endlocal & (
    :: set result variable in parent scope
    set "%~1=%ordered_packages%"
  )
goto:eof

:: Call the specified batch file and output the name when tracing is requested.
:: first argument: the batch file
:call_file
  if "%AMENT_TRACE_SETUP_FILES%" NEQ "" echo call "%~1"
  if exist "%~1" call "%~1%"
goto:eof
