cmake_minimum_required(VERSION 4.2)
project(codeforces)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "r_*/*.cpp" "edu_*/*.cpp")

foreach(SRC ${SOURCES})
    file(RELATIVE_PATH REL_PATH ${CMAKE_SOURCE_DIR} ${SRC})
    string(REPLACE "/" "_" TARGET_NAME ${REL_PATH})
    string(REPLACE ".cpp" "" TARGET_NAME ${TARGET_NAME})
    add_executable(${TARGET_NAME} ${SRC})
endforeach()

