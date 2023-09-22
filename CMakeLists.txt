cmake_minimum_required(VERSION 3.13)
project(coolstory_gram_client)
include(FetchContent)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost 1.74 REQUIRED coroutine)

FetchContent_Declare(
	json
	GIT_REPOSITORY https://github.com/nlohmann/json.git
	GIT_TAG bc889afb4c5bf1c0d8ee29ef35eaaf4c8bef8a5d # release/3.11.2
)
FetchContent_Declare(
	logger
	GIT_REPOSITORY https://github.com/temikfart/logger.git
	GIT_TAG 5954a903b1b8227cac89ddc04ead81225ed90821 # release/1.0.0
)
FetchContent_MakeAvailable(json logger)

include_directories(${BOOST_INCLUDE_DIRS})
include_directories(include)

add_executable(coolstory_gram_client
            src/main.cpp
			src/websocket_session.cpp)
target_link_libraries(coolstory_gram_client PRIVATE nlohmann_json::nlohmann_json liblogger Boost::coroutine)
