#include "Guest.h"

Guest::Guest() {}
Guest::Guest(string _phoneNumber, string _name, string _password, double _moneySpent, vector<Data> _bookingList) : Person(_phoneNumber, _name, _password) {
    moneySpent = _moneySpent;
    bookingList = _bookingList;
}
Guest::~Guest() {}

int Guest::getMoneySpent() const {
    return moneySpent;
}

vector<Data> Guest::getBookingList() {
    return bookingList;
}

void Guest::setMoneySpent(int _moneySpent) {
    moneySpent = _moneySpent;
}

void Guest::setBookingList(const vector<Data> _bookingList) {
    bookingList = _bookingList;
}

void Guest::booking(int _room, string _checkInDate, string _checkOutDate) {
    Data newBooking;
    newBooking.room = _room;
    newBooking.checkInDate = _checkInDate;
    newBooking.checkOutDate = _checkOutDate;
    newBooking.guestPhoneNumber = phoneNumber;
    bookingList.push_back(newBooking);
}

void Guest::canceling() {
    int choice;
    if (bookingList.size() == 0) {
        cout << "Booking List is empty" << endl;
    }
    else {
        cout << "Choose a booking to cancel" << endl;
        for (int i = 0; i < bookingList.size(); i++)
        {
            cout << i << ". " << bookingList[i].room << endl;
        }
        cin >> choice;
        if (choice < 0 || choice >= bookingList.size()) {
            cout << "Invalid choice" << endl;
        } 
        else {
            bookingList.erase(bookingList.begin() + choice);
        }
    }
}

void Guest::billing() {
    
}

void Guest::promoteToVIP() {
    if (moneySpent > 200) { // Example condition

    }
}
