cmake_minimum_required(VERSION 3.17)
project(philosophers C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(philosophers
        src/main.c include/philo_one.h src/options.c include/lib.h src/lib.c src/output.c)
