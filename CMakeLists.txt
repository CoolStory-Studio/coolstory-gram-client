cmake_minimum_required(VERSION 3.13)
project(coolstory_gram_client)

set(CMAKE_CXX_STANDARD 17)
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.74.0 REQUIRED system)

include_directories(include)

if(Boost_FOUND)
    include_directories(include)
    include_directories(${Boost_INCLUDE_DIRS})

    add_executable(coolstory_gram_client
            src/main.cpp)
    target_link_libraries(coolstory_gram_client ${Boost_LIBRARIES})
else()
    message("Boost library not found: asio.")
endif()