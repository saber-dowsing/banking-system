#pragma once
#include <string>

class Customer {
private:
    std::string customerId;
    std::string customerName;

public:
    Customer(const std::string& id, const std::string& name);

    std::string getId() const;
    std::string getName() const;
};
