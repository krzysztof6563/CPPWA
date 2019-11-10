#ifndef REQUEST_H
#define REQUEST_H

#include <string>

class Request
{
protected:

public:
    std::string adres;
    Request();
    virtual int send(std::string value) = 0;

    virtual ~Request(){}
};

#endif // REQUEST_H
