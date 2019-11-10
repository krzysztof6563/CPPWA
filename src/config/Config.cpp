#include "Config.h"
#include <fstream>
#include <iostream>

std::map <std::string, std::string> Config::options;

Config::Config() {
    this->load();
}

std::string Config::read(std::string configKey) {
    return Config::options[configKey];
}

void Config::load() {
    std::ifstream configFile;
    configFile.open(".config");
    if(configFile.is_open()) {
        std::string line;
        while(getline(configFile, line)) {
            Config::options.insert(std::pair<std::string,std::string>(this->getLineKey(line), this->getLineValue(line)));
        }
    }
}

std::string Config::getLineValue(std::string line) {
    std::string valueInitSequence = "=\"";
    std::string valueEndSequence = "\";";
    int quoteAfterEqualsIndex = line.find(valueInitSequence);
    int lastQuoteIndex = line.find(valueEndSequence);
    int valueLength = lastQuoteIndex - quoteAfterEqualsIndex - valueInitSequence.length();
    std::string value = line.substr(quoteAfterEqualsIndex + valueInitSequence.length(), valueLength);
    return value;
}

std::string Config::getLineKey(std::string line) {
    std::string key = line.substr(0, line.find("="));
    return key;
}
