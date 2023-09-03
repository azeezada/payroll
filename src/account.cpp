#include "account.h"
#include <cstdlib>

Account::Account() {
    this->account_id = rand();
}

int Account::getAccountId() {
    return this->account_id;
}