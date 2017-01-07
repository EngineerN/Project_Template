cmake_minimum_required(VERSION 3.5.0)

project(Test)

set(PROJECT_EXTERNAL)

foreach(PROJECT_EXTERNAL_ITEM ${PROJECT_EXTERNAL})
    #For the shared library:
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/external/${PROJECT_EXTERNAL_ITEM})
    include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/${PROJECT_EXTERNAL_ITEM}/include)
endforeach()

set(PROJECT_INTERNAL)

foreach(PROJECT_INTERNAL_ITEM ${PROJECT_INTERNAL})
    #For the shared library:
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/internal/${PROJECT_INTERNAL_ITEM})
    include_directories(${CMAKE_CURRENT_SOURCE_DIR}/internal/${PROJECT_INTERNAL_ITEM}/include)
endforeach()

#Bring the headers into the project
include_directories(include)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/CMake)

#Bring the 
file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${PROJECT_EXTERNAL})
SET(EXEC_NAME ${PROJECT_NAME})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})
