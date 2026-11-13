#include <iostream>
using namespace std;

int main() {
	int * myIntPointer = nullptr;
	myIntPointer = new int;

	*myIntPointer = 8;
	cout << "myIntPointer: " << *myIntPointer << endl;

	delete myIntPointer;
	myIntPointer = nullptr;

	int array_size = 8;
	myIntPointer = new int[array_size];
	for(int i = 0 ; i < array_size ; ++i) {
		myIntPointer[i] = i + 1;
	}
	for(int i = 0 ; i < array_size ; ++i) {
		cout << *(myIntPointer + i) << ' ';
	}
	delete [] myIntPointer;
	myIntPointer = nullptr;

	cout << endl;
	return 0;
}