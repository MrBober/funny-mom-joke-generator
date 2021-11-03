# Project options
cmake_minimum_required(VERSION 3.0.0)
project(funny-mom-joke-generator VERSION 1.0.0)

# Linker flags
set(CMAKE_EXE_LINKER_FLAGS "-O2")

# Sources
file(GLOB SOURCES "main.c")

add_executable(funny-mom-joke-generator ${SOURCES})
