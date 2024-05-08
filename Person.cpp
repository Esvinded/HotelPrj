#include "Person.h"

Person::Person(){
	phoneNumber = "";
	name = "";
	password = "";
}
Person::Person(string _phoneNumber,string _name,string _password)
: phoneNumber(_phoneNumber), name(_name), password(_password) {}
Person::~Person(){};

string Person::getPhoneNumber() const {
	return phoneNumber;
}

string Person::getName() const {
	return name;
}

string Person::getPassword() const {
	return password;
}

void Person::setPhoneNumber(string _phoneNumber) {
	phoneNumber = _phoneNumber;
}

void Person::setName(string _name) {
	name = _name;
}

void Person::setPassword(string _password) {
	password = _password;
}