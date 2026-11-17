#include <iostream>
#include "Employee.h"
using namespace std;
using Records::Employee;
#include "Database.h"
using Records::Database;

int displayMenu() {
	int selection;
	cout << endl;
	cout << "Employee Database" << endl;
	cout << "=================" << endl;
	cout << "1) Hire a new employee" << endl;
	cout << "2) Fire an employee" << endl;
	cout << "3) Promote an employee" << endl;
	cout << "4) List all employees" << endl;
	cout << "5) List all current employees" << endl;
	cout << "6) List all former employees" << endl;
	cout << "7) Demote an employee" << endl;
	cout << "0) Quit" << endl;
	cout << "---> ";
	cin >> selection;
	return selection;
}

void doHire(Database &db) {
	string firstName;
	string lastName;

	cout << "First name? ";
	cin >> firstName;

	cout << "Last name? ";
	cin >> lastName;

	db.addEmployee(firstName, lastName);
}

void doFire(Database &db) {
	string firstName;
	string lastName;

	cout << "First name? ";
	cin >> firstName;

	cout << "Last name? ";
	cin >> lastName;

	try
	{
		/* code */
		Employee & employee = db.getEmployee(firstName, lastName);
		employee.fire();
	}
	catch(const std::exception& e)
	{
		cerr << "Unable an fire employee not found."
			<< e.what()
			<< endl;
	}
}

void doPromote(Database &db) {
	int employeeNumber;
	int raiseAmount;

	cout << "Employee number? ";
	cin >> employeeNumber;

	cout << "How much of a raise? ";
	cin >> raiseAmount;

	try
	{
		/* code */
		Employee & employee = db.getEmployee(employeeNumber);
		employee.promote(raiseAmount);
	}
	catch(const std::exception& e)
	{
		cerr << "Unable to promote employee: "
			<< e.what()
			<< endl;
	}
}

void doDemote(Database &db) {
	int employeeNumber;
	int demeritAmount;

	cout << "Employee number? ";
	cin >> employeeNumber;

	cout << "How much of a demerit? ";
	cin >> demeritAmount;

	try
	{
		/* code */
		Employee  & employee = db.getEmployee(employeeNumber);
		employee.demote(demeritAmount);
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
		cerr << "Unable to demote employee: "
			<< e.what()
			<< endl;
	}
}

int main() {
	Database employeeDB;
	bool done = false;
	while(!done) {
		int selection = displayMenu();
		switch(selection) {
			case 0:
				done = true;
				break;
			case 1:
				doHire(employeeDB);
				break;
			case 2:
				doFire(employeeDB);
				break;
			case 3:
				doPromote(employeeDB);
				break;
			case 4:
				employeeDB.displayAll();
				break;
			case 5:
				employeeDB.displayCurrent();
				break;
			case 6:
				employeeDB.displayFormer();
				break;
			case 7:
				doDemote(employeeDB);
				break;
			default:
				break;
		}
	}
}

#if 0
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
#endif

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