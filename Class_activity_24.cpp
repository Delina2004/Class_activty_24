#include <iostream>
#include "Customer.hpp"
using namespace std;

int main() {
    Customer customer;

    cout << "Enter customer ID: ";
    cin >> customer.id;
    cin.ignore(); // Ignore newline character after ID input

    cout << "Enter customer name: ";
    getline(cin, customer.name);

    cout << "Enter customer email: ";
    getline(cin, customer.email);

    customer.display();

    return 0;
}
