#include <iostream>
using namespace std;

class AirlineTicket {
	public:
		AirlineTicket();
		~AirlineTicket();
	public:
		double calculatePriceInDollars() const;

		const string &getPassengerName() const;
		void setPassengerName(const string &name);

		int getNumberOfMiles() const;
		void setNumberOfMiles(int miles);

		bool hasEliteSuperRewardsStatus() const;
		void setHasEliteSuperRewardsStatus(bool status);
	private:
		string mPassengerName;
		int mNumberOfMiles;
		bool mHasEliteSuperRewardsStatus;
};

AirlineTicket::AirlineTicket() {
	this->mPassengerName = "Unknown Passenger";
	this->mNumberOfMiles = 0;
	this->mHasEliteSuperRewardsStatus = false;
	cout << __func__ << endl;
}

AirlineTicket::~AirlineTicket() {
	cout << __func__ << endl;
}

int main() {
	AirlineTicket * anAirlineTicket = new AirlineTicket();
	delete anAirlineTicket;

	AirlineTicket an2AirlineTicket;

	cout << endl;
	return 0;
}