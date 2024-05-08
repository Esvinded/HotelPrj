#include "VIP.h"

VIP::VIP(const string& phoneNumber, const string& name, const string& password, double initialSpent)
: Guest(phoneNumber, name, password), rank(0) {
    moneySpent = initialSpent;
    updateRank();
}

void VIP::billing() {
    // Special billing with discounts based on rank
}

void VIP::updateRank() {
    // Update rank based on money spent
}
