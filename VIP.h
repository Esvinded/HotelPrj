#include "Guest.h"

class VIP : public Guest {
private:
    int rank;

public:
    VIP(const string& phoneNumber, const string& name, const string& password, double initialSpent);
    void billing() override;
    void updateRank();
};
