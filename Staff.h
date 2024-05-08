#include "Person.h"

class Staff : public Person {
private:
    double commission;

public:
    Staff(const string& phoneNumber, const string& name, const string& password);
    void booking() override;
    void canceling() override;
    void billing() override;
    double calculateCommission();
};
