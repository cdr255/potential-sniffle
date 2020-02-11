cmake_minimum_required(VERSION 3.14.5)
project(newproj)
add_executable(newproj src/main.cpp)
target_compile_options(newproj PUBLIC --std=c++17 -g -Os -Wall -Weffc++ -pedantic  -pedantic-errors -Wextra -Waggregate-return -Wcast-align -Wcast-qual -Wconversion -Wdisabled-optimization -Werror -Wfloat-equal -Wformat=2 -Wformat-nonliteral -Wformat-security  -Wformat-y2k -Wimport  -Winit-self  -Winline -Winvalid-pch   -Wlong-long -Wmissing-field-initializers -Wmissing-format-attribute   -Wmissing-include-dirs -Wmissing-noreturn -Wpacked  -Wpadded -Wpointer-arith -Wredundant-decls -Wshadow -Wstack-protector -Wstrict-aliasing=2 -Wswitch-default -Wswitch-enum -Wunreachable-code -Wunused -Wunused-parameter -Wvariadic-macros -Wwrite-strings)
