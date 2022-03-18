cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 11)

add_library(cpp
        SHARED
        ../cpp/react-native-sequel.cpp
        ../cpp/react-native-sequel.h
        cpp-adapter.cpp
        )

# Specifies a path to native header files.
include_directories(
        ../cpp
        ../node_modules/react-native/React
        ../node_modules/react-native/React/Base
        ../node_modules/react-native/ReactCommon
        ../node_modules/react-native/ReactCommon/jsi
        ../node_modules/react-native/ReactCommon/callinvoker
        ../node_modules/react-native/ReactAndroid/src/main/java/com/facebook/react/turbomodule/core/jni
        ../node_modules/hermes-engine/android/include
)
