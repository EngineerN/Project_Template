# Project Setup
This file is a detailed description on how to setup this template. For updates on this project template, add a pull url to get updates on the "template" branch.

## Project Structure

Project
  CMake
  external
  include
  internal
  src

## Internal
Add projects that are internal project to the main project in this folder.

## External
Add projects that are external project to the main project in this folder.

## CPP Files
Place all cpp files in the src folder. Note that there should only be one file in the src folder and that is the main of your project.

## Header Files
The header files should be placed include.

## CMakeLists
The only necessary change is to change the project name and add the Subprojects names in the external and internal folders. (The names should be added on lines 5 and 13)
