#include "Customer.h"
#include "Account.h"

int main() {
    Customer customer("C1", "John Doe");
    Account account("A1", customer, 1000.0);

    account.display();

    account.deposit(500.0);
    account.display();

    account.withdraw(200.0);
    account.display();

    account.withdraw(1500.0);

    return 0;
}
