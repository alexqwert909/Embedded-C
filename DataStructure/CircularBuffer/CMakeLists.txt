cmake_minimum_required(VERSION 3.0.0)
project(circular_buffer VERSION 0.1.0)

include(CTest)
enable_testing()
file(GLOB SOURCES "*.c")

add_executable(circular_buffer ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
