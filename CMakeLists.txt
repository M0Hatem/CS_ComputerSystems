cmake_minimum_required(VERSION 3.28)
project(CS_ComputerSystems C)

set(CMAKE_C_STANDARD 11)

add_executable(CS_ComputerSystems string.c
        pointer.c
        funtion.c
        io.c
        cpp.c
        Lec_4/string_2.c
        Lec_4/string_3.c
        Lec_4/challenge_atoi.c
        Lec_4/gettimeday.c
        Lec_4/file_1.c)
