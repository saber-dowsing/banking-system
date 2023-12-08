#include "Account.h"
#include <iostream>

Account::Account(const std::string& id, const Customer& customer, double balance)
    : accountId(id), customer(customer), balance(balance) {}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds!" << std::endl;
    }
}

void Account::display() const {
    std::cout << "Account ID: " << accountId << ", Customer: " << customer.getName() << ", Balance: $" << balance << std::endl;
}
