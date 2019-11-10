#ifndef HTTPHeader

#include <iostream>
#include <map>
#include <string>

class HTTPHeader {
public:
    HTTPHeader();

    void setOption(std::string name, std::string value);

    void sendHeader();
private:
    std::map<std::string, std::string> header;
};

#endif
