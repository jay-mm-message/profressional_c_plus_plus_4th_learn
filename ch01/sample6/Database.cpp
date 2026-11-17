#include "Database.h"
using Records::Employee;
using Records::Database;
using std::string;
using std::logic_error;
using std::endl;
using std::cout;

Employee &Database::addEmployee(const string &firstName,
	const string &lastName) {

	Employee newAnEmployee(firstName, lastName);
	newAnEmployee.setEmployeeNumber(++mNextEmployeeNumber);
	newAnEmployee.hire();
	mEmployees.push_back(newAnEmployee);
	return mEmployees[mEmployees.size() - 1];
}

Employee &Database::getEmployee(int employeeNumber) {
	for(auto & employee : this->mEmployees) {
		if (employee.getEmployeeNumber() == employeeNumber) {
			return employee;
		}
	}
	throw logic_error("No employee found.");
}

Employee &Database::getEmployee(const string &firstName,
								const string &lastName) {
	for(auto & employee : this->mEmployees) {
		if ((employee.getFirstName() == firstName)
			&& (employee.getLastName() == lastName)) {
			return employee;
		}
	}
	throw logic_error("No employee found.");
}

void Database::displayAll() const {
	cout << "==== display all ==== "
		<< endl;
	for(const auto & employee : this->mEmployees) {
		employee.display();
	}
	cout << "=== finish information =="
		<< endl;
}
void Database::displayCurrent() const {
	cout << "==== display current ==== "
		<< endl;
	for(const auto & employee : this->mEmployees) {
		if (employee.isHired()) {
			employee.display();
		}
	}
	cout << "=== finish information =="
		<< endl;
}
void Database::displayFormer() const {
	cout << "==== display former ==== "
		<< endl;
	for(const auto & employee : this->mEmployees) {
		if (!employee.isHired()) {
			employee.display();
		}
	}
	cout << "=== finish information =="
		<< endl;
}
