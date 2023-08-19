#pragma once

#include <cstdlib>
#include <functional>
#include <iostream>
#include <string>

#include <logger/log.hpp>

#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/asio/spawn.hpp>

namespace beast = boost::beast;         // from <boost/beast.hpp>
namespace http = beast::http;           // from <boost/beast/http.hpp>
namespace websocket = beast::websocket; // from <boost/beast/websocket.hpp>
namespace net = boost::asio;            // from <boost/asio.hpp>
using tcp = boost::asio::ip::tcp;       // from <boost/asio/ip/tcp.hpp>

void fail(beast::error_code ec, char const* what);
void do_session(std::string host,
                std::string const& port,
                std::string const& text,
                net::io_context& ioc,
                net::yield_context yield);
void run(char* host, char* port, char* text);
