# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/peter_gui_package_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/peter_gui_package_autogen.dir/ParseCache.txt"
  "peter_gui_package_autogen"
  )
endif()
