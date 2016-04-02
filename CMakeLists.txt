cmake_minimum_required (VERSION 2.6)

project (ValgrindPlaygound)
set(CMAKE_BUILD_TYPE Debug)

add_executable(memleak memleak.c)
add_executable(uninit_var uninit_var.c)
add_executable(uninit_buf uninit_buf.c)
add_executable(outofbounds outofbounds.c)
