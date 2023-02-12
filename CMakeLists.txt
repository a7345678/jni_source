cmake_minimum_required(VERSION 3.23)
project(jni_source)

set(CMAKE_CXX_STANDARD 14)

add_library(jni_source SHARED JNIDemo.c)
