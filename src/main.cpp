#include <iostream>
#include <string>
#include "HTTPHeader/HTTPHeader.hpp"
#include "config/Config.h"

void bootstrap() {
    HTTPHeader header;
    header.setOption("Content-Type", "text/html");
    header.sendHeader();
    Config config;
}

int main()
{
    bootstrap();
    std::cout << "<h1>Hello world!</h1>";
    return 0;
}
