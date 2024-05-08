#pragma once
#include "Person.h"
#include <vector>

struct Data {
    int room;
    string checkInDate;
    string checkOutDate;
    string guestPhoneNumber;
};

class Guest : public Person {
protected:
    double moneySpent;
    vector<Data> bookingList;

public:
    Guest();
    Guest(string, string, string, double, vector<Data>);
    ~Guest();

    int getMoneySpent() const;
    vector<Data> getBookingList();

    void setMoneySpent(int);
    void setBookingList(vector<Data>);

    void booking(int, string, string);
    void canceling();
    void billing();
    void promoteToVIP();
};
