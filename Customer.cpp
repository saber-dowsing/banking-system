#include "Customer.h"

Customer::Customer(const std::string& id, const std::string& name)
    : customerId(id), customerName(name) {}

std::string Customer::getId() const {
    return customerId;
}

std::string Customer::getName() const {
    return customerName;
}
