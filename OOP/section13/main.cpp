#include <iostream>
#include <cstring>
#include <vector>
#include "Account.h"

using namespace std;

int main(){
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else 
        cout << "Deposit fail" << endl;
    
    return 0;
}