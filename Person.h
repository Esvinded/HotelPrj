#pragma once
#include <string>
using namespace std;

class Person {
protected:
    string phoneNumber;
    string name;
    string password;

public:
    Person();
    Person(string, string, string);
    ~Person();

    string getPhoneNumber() const;
    string getName() const;
    string getPassword() const;

    void setPhoneNumber(string);
    void setName(string);
    void setPassword(string);

    virtual void booking() = 0;
    virtual void canceling() = 0;
    virtual void billing() = 0; 
};
    

