# Copyright 2015 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

_ament()
{
  local cur prev

  COMPREPLY=()

  cur=${COMP_WORDS[COMP_CWORD]}
  prev=${COMP_WORDS[COMP_CWORD-1]}

  if [[ ${COMP_CWORD} -eq 1  ]] ; then
    COMPREPLY=($(compgen -W "build build_pkg list_dependencies list_packages package_name package_version test test_pkg test_results uninstall uninstall_pkg" -- ${cur}))
  elif [[ "$cur" == "-DCMAKE_BUILD_TYPE="* ]]; then
    # autocomplete CMake argument CMAKE_BUILD_TYPE with its options
    COMPREPLY=( $( compgen -P "-DCMAKE_BUILD_TYPE=" -W "Debug MinSizeRel None Release RelWithDebInfo" -- "${cur:19}" ) )
  else
    if [[ "${COMP_WORDS[@]}" == *" build_pkg "* || "${COMP_WORDS[@]}" == *" test_pkg "* ]] ; then
      COMPREPLY=($(compgen -W "--ament-cmake-args --build-space --build-tests --cmake-args --ctest-args --force-ament-cmake-configure --force-cmake-configure --install-space --make-flags --skip-build --skip-install --symlink-install" -- ${cur}))
    elif [[ "${COMP_WORDS[@]}" == *" build "* || "${COMP_WORDS[@]}" == *" test "* ]] ; then
      if [[ "--start-with" == *${prev}* && ${cur} != -* ]] ; then
        COMPREPLY=($(compgen -W "$(ament list_packages --names-only)" -- ${cur}))
      elif [[ "--end-with" == *${prev}* && ${cur} != -* ]] ; then
        COMPREPLY=($(compgen -W "$(ament list_packages --names-only)" -- ${cur}))
      elif [[ "--only-packages" == *${prev}* && ${cur} != -* ]] ; then
        COMPREPLY=($(compgen -W "$(ament list_packages --names-only)" -- ${cur}))
      elif [[ "--cmake-args" == *${prev}* && ${cur} != -* ]] ; then
        COMPREPLY=($(compgen -W "-DCMAKE_BUILD_TYPE=" -- ${cur}))
      else
        COMPREPLY=($(compgen -W "--ament-cmake-args --build-space --build-tests -C --cmake-args --end-with --force-ament-cmake-configure --force-cmake-configure --make-flags --install-space --isolated --only-packages --parallel --skip-build --skip-install --start-with --symlink-install" -- ${cur}))
      fi
    elif [[ "${COMP_WORDS[@]}" == *" list_dependencies "* ]] ; then
      if [[ "--basepath" == *${prev} && ${cur} != -* ]] ; then
        COMPREPLY=($(compgen -o dirnames ${cur}))
      else
	BASEPATH="./"
	for i in "${!COMP_WORDS[@]}"; do
	  if [[ "${COMP_WORDS[$i]}" == "--basepath" ]] ; then
	    BASEPATH=${COMP_WORDS[$i+1]}
	    break
	  fi
	done
	COMPREPLY=($(compgen -W "--basepath --build-deps --exec-deps --test-deps $(ament list_packages --names-only $BASEPATH)" -- ${cur}))
      fi
    elif [[ "${COMP_WORDS[@]}" == *" list_packages "* ]] ; then
      if [[ "--depends-on" == *${prev}* && ${cur} != -* ]] ; then
        COMPREPLY=($(compgen -W "$(ament list_packages --names-only)" -- ${cur}))
      else
        COMPREPLY=($(compgen -W "--depends-on --names-only --paths-only --topological-order" -- ${cur}))
      fi
    elif [[ "${COMP_WORDS[@]}" == *" package_name "* ]] ; then
      COMPREPLY=($(compgen -d -S / -o nospace -- ${cur}))
    elif [[ "${COMP_WORDS[@]}" == *" package_version "* ]] ; then
      COMPREPLY=($(compgen -W "$(ament list_packages --paths-only)" -- ${cur}))
    elif [[ "${COMP_WORDS[@]}" == *" test_results "* ]] ; then
      COMPREPLY=($(compgen -W "--verbose" -d -o nospace -- ${cur}))
    fi
  fi

  return 0
}

complete -F _ament ament
