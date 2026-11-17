#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"

namespace Records
{
	using std::vector;
	const int kFirstEmployeeNumber = 1000;
	class Database {
		public:
			Employee &addEmployee(const string &firstName,
				const string &lastName);
			Employee &getEmployee(int employeeNumber);
			Employee &getEmployee(const string &firstName,
						const string &lastName);

			void displayAll() const;
			void displayCurrent() const;
			void displayFormer() const;
		private:
			vector<Employee> mEmployees;
			int mNextEmployeeNumber = kFirstEmployeeNumber;
	};
} // namespace Records
