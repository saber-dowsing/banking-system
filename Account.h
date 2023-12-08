#pragma once
#include "Customer.h"

class Account {
private:
    std::string accountId;
    Customer customer;
    double balance;

public:
    Account(const std::string& id, const Customer& customer, double balance);

    void deposit(double amount);
    void withdraw(double amount);
    void display() const;
};
