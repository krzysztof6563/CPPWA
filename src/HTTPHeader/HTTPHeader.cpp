#include "HTTPHeader.hpp"

HTTPHeader::HTTPHeader()
{
}

void HTTPHeader::setOption(std::string name, std::string value)
{
    header[name] = value;
}

void HTTPHeader::sendHeader() {
    std::map<std::string, std::string>::iterator it = header.begin();

    while (it != header.end())
    {
        std::string name = it->first;
        std::string value = it->second;
        std::cout << name << ": " << value << "\n\n";
        it++;
    }
}
