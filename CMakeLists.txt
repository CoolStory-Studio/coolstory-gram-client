cmake_minimum_required(VERSION 3.13)
project(coolstory_gram_client)
include(FetchContent)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost 1.74 REQUIRED)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz)
FetchContent_MakeAvailable(json)

include_directories(include)

add_executable(coolstory_gram_client
            src/main.cpp)
target_link_libraries(coolstory_gram_client PRIVATE nlohmann_json::nlohmann_json)

