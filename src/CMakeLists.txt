cmake_minimum_required(VERSION 3.22)

set (MY_DIRECTORY ${CMAKE_SOURCE_DIR}/include)

set(SOURCE
        main.cpp

        )
set(INCLUDE
        ${MY_DIRECTORY}/circle.h
        ${MY_DIRECTORY}/figure.h
        ${MY_DIRECTORY}/equilateral_triangle.h
        ${MY_DIRECTORY}/rectangle.h
        ${MY_DIRECTORY}/square.h
        )




add_executable(elf_village ${SOURCE} ${INCLUDE})
target_include_directories (elf_village PUBLIC ${MY_DIRECTORY})