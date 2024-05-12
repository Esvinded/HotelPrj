#include "VIP.h"

VIP::VIP() {}
VIP::VIP(string _type, string _phoneNumber, string _name, string _password, double _moneySpent, vector<Data> _bookingList, string _rank)
: Guest(_type, _phoneNumber, _name, _password, _moneySpent, _bookingList) {
    rank = _rank;
}
VIP::~VIP() {}

string VIP::getRank() const
{
	return rank;
}

void VIP::setRank(string _rank)
{
	rank = _rank;
}

void VIP::billing() {
    // Special billing with discounts based on rank
}

void VIP::updateRank() {
	if (moneySpent >= 200 || moneySpent <500)
	{
		rank = "Silver";
	}
	else
	{
		if (moneySpent >= 500 || moneySpent < 1000)
		{
			rank = "Gold";
		}
		else {
			rank = "Diamond";
		}
	}
}
