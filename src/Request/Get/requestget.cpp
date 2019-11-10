#include "./requestget.h"
#include <iostream>
#include <map>

RequestGet::RequestGet()
{

}

int RequestGet::send(std::string key, std::string value)
{
    if( !values.empty() )
    {
        std::map<std::string, std::string>::iterator itr;

        std::cout <<"<a href =?";
        for (itr = values.begin(); itr != values.end(); ++itr)
        {
            std::cout << itr->first
                      << "=" << itr->second
                      << "&";
        }

        values.insert(std::pair<std::string,std::string>(key,value));
        std::cout << key << "=" << value << ">click me</a>";
        return 0;
    }
    else
    {
        values.insert(std::pair<std::string,std::string>(key,value));
        std::cout <<"<a href =?" << key << "=" << value << ">click me</a>";
        return -1;
    }
}

int RequestGet::show()
{
    return 0;
}
