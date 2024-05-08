#include "Staff.h"

Staff::Staff(const string& phoneNumber, const string& name, const string& password)
: Person(phoneNumber, name, password), commission(0) {}

void Staff::booking() {
    // Implementation of booking
}

void Staff::canceling() {
    // Implementation of canceling
}

void Staff::billing() {
    // Implementation of billing
}

double Staff::calculateCommission() {
    return 0.05; // 5% commission
}
