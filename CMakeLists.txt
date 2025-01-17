cmake_minimum_required(VERSION 3.0)
project(colie LANGUAGES C VERSION 0.1.0)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_FLAGS "-Wall -Wextra -Werror -pedantic")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(colie src/colie.c)
target_include_directories(colie PUBLIC include)

install(TARGETS colie
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)

install(DIRECTORY include/ DESTINATION include)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
