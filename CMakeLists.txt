cmake_minimum_required(VERSION 3.0.0)
project(cmaketest VERSION 0.1.0)

include_directories("${PROJECT_BINARY_DIR}")

# Find all *.cpp files and store in list native_srcs
file(GLOB_RECURSE native_srcs RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
foreach(srcfile IN LISTS native_srcs)
    # Get file name without directory
    get_filename_component(elfname ${srcfile} NAME_WE)
    add_executable(${elfname} ${srcfile})
endforeach()
