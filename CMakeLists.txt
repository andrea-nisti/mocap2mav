cmake_minimum_required(VERSION 2.6)
project (mocap2mav)


# Set build directory
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(Eigen 3 QUIET)
if(NOT Eigen_FOUND)
    include(cmake/FindEigen3.cmake)
    #include(/usr/share/cmake-3.0/Modules/FindEigen3.cmake)
    set(Eigen_INCLUDE_DIR ${EIGEN3_INCLUDE_DIR})
endif()



#find_package(PkgConfig)
#pkg_search_module(Eigen3 REQUIRED eigen3)

include_directories(${Eigen_INCLUDE_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SRC_DIR ${PROJECT_SOURCE_DIR}/src)

set(MODULES_SRC_DIR ${PROJECT_SOURCE_DIR}/Modules)
set(PROJECT_LIB_DIR ${PROJECT_SOURCE_DIR}/projectLIBS)

include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${PROJECT_SRC_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_LIB_DIR}")

#Project modules
#add_subdirectory(${MODULES_SRC_DIR}/NatNetReceiver)
#add_subdirectory(${MODULES_SRC_DIR}/Dispatcher)
add_subdirectory(${MODULES_SRC_DIR}/Executioner)
add_subdirectory(${MODULES_SRC_DIR}/Automatic)
add_subdirectory(${MODULES_SRC_DIR}/Test)
add_subdirectory(${MODULES_SRC_DIR}/Security)

#Project external libs
add_subdirectory(${PROJECT_LIB_DIR}/StateMachine)

