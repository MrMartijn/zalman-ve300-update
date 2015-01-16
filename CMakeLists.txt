cmake_minimum_required(VERSION 2.8.4)
project(zalman_ve300_update)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake-extras/")

set(SOURCE_FILES main.cpp)
add_executable(update-isos ${SOURCE_FILES})

find_package (CURL)
if (CURL_FOUND)
  include_directories(${CURL_INCLUDE_DIR})
  target_link_libraries (update-isos ${CURL_LIBRARIES})
endif (CURL_FOUND)

find_package(Boost 1.54.0 COMPONENTS filesystem system)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  target_link_libraries(update-isos ${Boost_LIBRARIES})
endif(Boost_FOUND)

if(YAMLCPP_FOUND)
  include_directories(${YAMLCPP_INCLUDE_DIR})
  target_link_libraries(update-isos ${YAMLCPP_LIBRARY})
endif(YAMLCPP_FOUND)

find_package(YamlCpp REQUIRED)