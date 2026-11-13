#include <iostream>
using namespace std;

int main() {
	int * myIntPointer = nullptr;
	myIntPointer = new int;

	*myIntPointer = 8;
	cout << "myIntPointer: " << *myIntPointer << endl;

	delete myIntPointer;
	myIntPointer = nullptr;

	cout << endl;
	return 0;
}