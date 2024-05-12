#pragma once
#include "Guest.h"

class VIP : public Guest {
private:
    string rank;

public:
    VIP();
    VIP(string, string, string, string, double, vector<Data>, string);
    ~VIP();

    string getRank() const;
    void setRank(string);

    void billing();
    void updateRank();
};
