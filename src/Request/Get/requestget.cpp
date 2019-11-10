#include "./requestget.h"
#include <iostream>
#include <cstdlib>

RequestGet::RequestGet()
{

}

RequestGet::RequestGet( std::string adres ) : Request(), adres(adres)
{

}

int RequestGet::send(std::string value)
{
    if( value != "")
    {
        std::cout <<"<a href = "<< "" <<"?id="<<value<<"><\a>";
        return 0;
    }
    else
    {
        return -1;
    }
}
