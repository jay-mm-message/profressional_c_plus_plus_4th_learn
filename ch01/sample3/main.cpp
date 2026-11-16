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

int main() {
	return 0;
}