###################################################################################
#
#	MIT License
#
#   Copyright (c) 2017 MARTIAL Alexis
#
#   Permission is hereby granted, free of charge, to any person obtaining a copy
#   of this software and associated documentation files (the "Software"), to deal
#   in the Software without restriction, including without limitation the rights
#   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
#   copies of the Software, and to permit persons to whom the Software is
#   furnished to do so, subject to the following conditions:
#
#   The above copyright notice and this permission notice shall be included in all
#   copies or substantial portions of the Software.
#
#   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
#   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
#   SOFTWARE.
#
###################################################################################

# Needed version for Cmake
cmake_minimum_required(VERSION 3.0)

# Project name
project (BRISE_TEST_AtomicDataTypes CXX)#Format "BRISE_TEST_NameOfTheLibrary"

# Set variales
set(INC_DIR include)#include directory
set(SRC_DIR src)#include directory


# Lists of the dependecies
set(LIBS
    #LibsNames
    BRISE_AtomicDataTypes
)

#Auto sources' list génération
file(GLOB SRC_FILES ${SRC_DIR}/*.cpp)
#Auto header's list génération
#file(GLOB INC_FILES ${INC_DIR}/BRISE/*.h)

#création of the test executable
add_executable(${PROJECT_NAME} main.cpp ${SRC_FILES})
#attach include directory to the executable
target_include_directories(${PROJECT_NAME} PUBLIC ${INC_DIR})
#dependecies of the executable
target_link_libraries(${PROJECT_NAME} PUBLIC ${LIBS})

#Adding the executable to the tests
add_test(${PROJECT_NAME} ${PROJECT_NAME})
