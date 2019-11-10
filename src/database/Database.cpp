//
// Created by dawid on 10.11.19.
//

#include "Database.h"
#include "repositories/RepositoryFactory.h"
#include "repositories/test/TestRepositoryFactory.h"

Database::Database(RepositoryFactory* repositoryFactory) {
    this->setRepositoryFactory(repositoryFactory);
}

void Database::setRepositoryFactory(RepositoryFactory *repositoryFactory) {
    this->currentRepoFactory = repositoryFactory;
}

UserRepository* Database::getUserRepository() {
    return this->currentRepoFactory->getUserRepository();
}

void Database::test() {
    this->currentRepoFactory = new TestRepositoryFactory();
}