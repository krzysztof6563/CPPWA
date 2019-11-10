//
// Created by dawid on 10.11.19.
//

#ifndef CPPWA_MYSQLREPOSITORYFACTORY_H
#define CPPWA_MYSQLREPOSITORYFACTORY_H

#include "../RepositoryFactory.h"

class MysqlRepositoryFactory: public RepositoryFactory {
public:
    virtual UserRepository* getUserRepository();
};


#endif //CPPWA_MYSQLREPOSITORYFACTORY_H
