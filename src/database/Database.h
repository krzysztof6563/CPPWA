//
// Created by dawid on 10.11.19.
//

#ifndef CPPWA_DATABASE_H
#define CPPWA_DATABASE_H

#include "repositories/RepositoryFactory.h"
#include "repositories/UserRepository.h"

class Database {
public:
    Database(RepositoryFactory* repositoryFactory);
    void setRepositoryFactory(RepositoryFactory* repositoryFactory);
    UserRepository* getUserRepository();
    void test();

private:
    RepositoryFactory* currentRepoFactory;
};


#endif //CPPWA_DATABASE_H
