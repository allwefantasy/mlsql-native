cmake_minimum_required(VERSION 3.17)
project(MlsqlNativeLib)


find_package(JNI REQUIRED)

if (JNI_FOUND)
    message (STATUS "JNI_INCLUDE_DIRS=${JNI_INCLUDE_DIRS}")
    message (STATUS "JNI_LIBRARIES=${JNI_LIBRARIES}")
endif()

include_directories(${JNI_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 17)
AUX_SOURCE_DIRECTORY(src DIR_SRCS)
#add_executable(MlsqlNativeLib main.cpp)
add_library(MlsqlNativeLib SHARED ${DIR_SRCS})