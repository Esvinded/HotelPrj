#pragma once
#include "Guest.h"

class Accommodation {
private:
    int RoomNumber;
    int Price;
    bool Status;
    
public:
    Accommodation();
    Accommodation(int,int,bool,int);
    ~Accommodation();
    
    virtual void displayInfo() const;
};
