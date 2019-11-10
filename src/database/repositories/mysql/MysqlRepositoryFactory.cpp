//
// Created by dawid on 10.11.19.
//

#include "MysqlRepositoryFactory.h"
#include "MysqlUserRepository.h"

UserRepository* MysqlRepositoryFactory::getUserRepository() {
    return new MysqlUserRepository;
}