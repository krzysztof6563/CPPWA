//
// Created by dawid on 10.11.19.
//

#include "TestRepositoryFactory.h"
#include "TestUserRepository.h"

UserRepository* TestRepositoryFactory::getUserRepository() {
    return new TestUserRepository();
}
