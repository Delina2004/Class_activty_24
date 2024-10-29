#include <iostream>
#include "Customer.hpp"
using namespace std;

void Customer::display() const {
    cout << "Customer Details:\n";
    cout << "ID: " << id << "\n";
    cout << "Name: " << name << "\n";
    cout << "Email: " << email << "\n";
}
