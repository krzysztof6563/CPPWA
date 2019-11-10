#ifndef CPPWA_CONFIG_H
#define CPPWA_CONFIG_H

#include <string>
#include <map>

class Config {
public:
    Config();
    static std::string read(std::string configKey);
    void load();
private:
    static std::map <std::string, std::string> options;
    std::string getLineValue(std::string line);
    std::string getLineKey(std::string line);
};


#endif //CPPWA_CONFIG_H
