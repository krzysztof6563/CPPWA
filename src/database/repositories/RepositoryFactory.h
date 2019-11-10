//
// Created by dawid on 10.11.19.
//

#ifndef CPPWA_REPOSITORYFACTORY_H
#define CPPWA_REPOSITORYFACTORY_H

#include "UserRepository.h"

class RepositoryFactory {
public:
    virtual UserRepository* getUserRepository() = 0;
};


#endif //CPPWA_REPOSITORYFACTORY_H
