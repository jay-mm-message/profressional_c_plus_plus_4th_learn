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
	AirlineTicket myTicket; // Stack-based AirlineTicket
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	double cost = myTicket.calculatePriceInDollars();
	cout << "This ticket will cost $" << cost << endl;

	// Heap-based AirlineTicket with smart pointer
	auto myTicket2 = make_unique<AirlineTicket>();
	myTicket2->setPassengerName("Laudimore M. Hallidue");
	myTicket2->setNumberOfMiles(2000);
	myTicket2->setHasEliteSuperRewardsStatus(false);
	double cost2 = myTicket2->calculatePriceInDollars();
	cout << "This other ticket will cost $" << cost2 << endl;
	// No need to delete myTicket2, happens automatically

	// Heap-based AirlineTicket without smart pointer (not recommended)
	AirlineTicket* myTicket3 = new AirlineTicket();
	myTicket3->setPassengerName("Tommy M. Hallidue");
	myTicket3->setNumberOfMiles(100);
	myTicket3->setHasEliteSuperRewardsStatus(false);
	double cost3 = myTicket3->calculatePriceInDollars();
	cout << "This other ticket will cost $" << cost3 << endl;
	delete myTicket3;

	cout << endl;
	return 0;
}