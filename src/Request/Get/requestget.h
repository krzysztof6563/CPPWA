#ifndef REQUESTGET_H
#define REQUESTGET_H

#include <string>
#include "../request.h"

class RequestGet : public Request
{
    std::string adres;

public:
    RequestGet();
    RequestGet( std::string );
    int send( std::string );

    ~RequestGet(){}
};

#endif // REQUESTGET_H
