#include <iostream>
#include "Employee.h"
using namespace std;
using Records::Employee;

int main() {
	cout << "Testing the Employee class." << endl;
	Employee employee;
	employee.setLastName("Sandy");
	employee.setFirstName("Lin");
	employee.setEmployeeNumber(1);
	employee.setSalary(100000);
	employee.promote();
	employee.promote(500);
	employee.hire();
	employee.display();

	cout << endl;
	return 0;
}