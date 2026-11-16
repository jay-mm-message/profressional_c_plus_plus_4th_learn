#include <iostream>
using namespace std;
#include "AirlineTicket.h"

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