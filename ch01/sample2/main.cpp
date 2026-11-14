#include <iostream>
using namespace std;

#if 0
int main() {
	class Employee {
		typedef unsigned int unit32;
		public:
			string name;
			unit32 salary;
		public:
			void show() {
				cout << "Employee name: " << this->name;
				cout << ", salary: " << this->salary;
				cout << endl;
			}
		public:
			Employee(string srt, unit32 number) : name(srt), salary(number) {};
	};

	auto anEmployee = make_unique<Employee>("Ellen", 2500);
	anEmployee->show();

	cout << endl;
	return 0;
}
#endif

#if 0
void func(char *srt) {
	cout << "char* version" << endl;
}
void func(int i) {
	cout << "int version" << endl;
}

int main() {
	func(nullptr);
	func(0);
	return 0;
}
#endif

#if 0
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
#endif