cmake_minimum_required(VERSION 3.5)

project(roe VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)


enable_testing()

include(CMakeDependentOption)
include(GNUInstallDirs)

add_subdirectory(roe)

