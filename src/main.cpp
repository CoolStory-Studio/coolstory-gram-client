#include "CSGClient/main.hpp"

int main(int argc, char** argv)
{
    logger::init(logger::debug, logger::cout);

    if(argc != 4)
    {
        std::cerr <<
                  "Usage: coolstory_gram_client <host> <port> <text>\n" <<
                  "Example:\n" <<
                  "    coolstory_gram_client echo.websocket.org 80 \"Hello, world!\"\n";
        return EXIT_FAILURE;
    }
    auto const host = argv[1];
    auto const port = argv[2];
    auto const text = argv[3];

    run(host, port, text);

    return EXIT_SUCCESS;
}
