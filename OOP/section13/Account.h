#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;
// #pragma once

class Account
{
private:
    string name;
    double balance;
    
public:
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    void set_name(string);
    string get_name();
    bool deposit(double);
    bool withdraw(double);
};

#endif