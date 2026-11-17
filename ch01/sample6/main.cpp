#include <iostream>
#include "Employee.h"
using namespace std;
using Records::Employee;
#include "Database.h"
using Records::Database;

int main() {
	Database myDB;
	Employee &emp1 = myDB.addEmployee("Greg", "Wallis");
	emp1.fire();
	Employee &emp2 = myDB.addEmployee("Marc", "White");
	emp2.setSalary(100000);
	Employee &emp3 = myDB.addEmployee("John", "Doe");
	emp3.setSalary(20000);
	emp3.promote();

	cout << "All employees: " << endl << endl;
	myDB.displayAll();

	cout << endl << "current employees: " << endl << endl;
	myDB.displayCurrent();

	cout << endl << "former employees: " << endl << endl;
	myDB.displayFormer();

	cout << endl;
	return 0;
}
#if 0
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
#endif