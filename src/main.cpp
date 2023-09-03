#include <iostream>
#include "account.h"

using namespace std;

int main()
{
    cout << "\n";
    Account account = Account();
    cout << account.getAccountId() << "\n";
    return 0;
}