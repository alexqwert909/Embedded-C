cmake_minimum_required(VERSION 3.0.0)
project(ProxyPattern VERSION 0.1.0)

include(CTest)
enable_testing()
file(GLOB SOURCES "*.c")

add_executable(ProxyPattern ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
