//
// Created by dawid on 10.11.19.
//

#ifndef CPPWA_TESTREPOSITORYFACTORY_H
#define CPPWA_TESTREPOSITORYFACTORY_H

#include "../RepositoryFactory.h"

class TestRepositoryFactory: public RepositoryFactory {
public:
    TestRepositoryFactory(): RepositoryFactory() {};
    UserRepository* getUserRepository();
};


#endif //CPPWA_TESTREPOSITORYFACTORY_H
