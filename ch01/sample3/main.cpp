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

const string &AirlineTicket::getPassengerName() const {
	return mPassengerName;
}

void AirlineTicket::setPassengerName(const string &name) {
	mPassengerName = name;
}

int AirlineTicket::getNumberOfMiles() const {
	return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles) {
	mNumberOfMiles = miles;
}

bool  AirlineTicket::hasEliteSuperRewardsStatus() const {
	return mHasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status) {
	mHasEliteSuperRewardsStatus = status;
}

double AirlineTicket::calculatePriceInDollars() const {
	if (hasEliteSuperRewardsStatus()) {
		// Elite Super Rewards customers fly for free!
		return 0;
	}
	// The cost of the ticket is the number of miles times 0.1.
	// Real airlines probably have a more complicated formula!
	return getNumberOfMiles() * 0.1;
}

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