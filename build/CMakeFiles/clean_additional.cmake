# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Share-X-Ray_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Share-X-Ray_autogen.dir\\ParseCache.txt"
  "Share-X-Ray_autogen"
  )
endif()
