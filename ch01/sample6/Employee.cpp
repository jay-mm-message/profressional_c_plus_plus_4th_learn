
#include <iostream>
#include "Employee.h"
using Records::Employee;
using std::cout;
using std::endl;
using std::string;

Employee::Employee(const string &firstName,
	const string &lastName) {
	this->mFirstName = firstName;
	this->mLastName = lastName;
}

void Employee::promote(int raiseAmount) {
	this->setSalary(this->getSalary() + raiseAmount);
}

void Employee::demote(int demeritAmount) {
	this->setSalary(this->getSalary() - demeritAmount);
}

void Employee::hire() { // Hires or rehires the employee
	this->mHired = true;
}

void Employee::fire() {  // Dismisses the employee
	this->mHired = false;
}

void Employee::display() const { // Outputs employee info to console
	cout << "Employee: "
		<<	this->getLastName()
		<< ", "
		<< this->getFirstName()
		<< endl;
	cout << "--------------------------------"
		<< endl;
	cout << (this->isHired() ? "Current" : "Former")
		<< ' '
		<< "Employee"
		<< endl;
	cout << "Salary: $" << this->getSalary()
		<< endl;
	cout << endl;
}

// Getters and setters
void Employee::setFirstName(const string &firstName) {
	this->mFirstName = firstName;
}

const string &Employee::getFirstName() const {
	return this->mFirstName;
}

void Employee::setLastName(const string &lastName) {
	this->mLastName = lastName;
}

const string &Employee::getLastName() const {
	return this->mLastName;
}

int Employee::getEmployeeNumber() const {
	return this->mEmployeeNumber;
}

void Employee::setEmployeeNumber(int employeeNumber) {
	this->mEmployeeNumber = employeeNumber;
}

int Employee::getSalary() const {
	return this->mSalary;
}

void Employee::setSalary(int salary) {
	this->mSalary = salary;
}

bool Employee::isHired() const {
	return this->mHired;
}