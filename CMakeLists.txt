cmake_minimum_required(VERSION 3.13)
project(coolstory_gram_client)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(coolstory_gram_client
            src/main.cpp)
