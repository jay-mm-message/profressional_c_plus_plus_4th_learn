#pragma once
#include <string>

namespace Records {
	const int kDefaultStartingSalary = 30000;
	using std::string;

	class Employee {
		private:
			string mFirstName;
			string mLastName;
			int mEmployeeNumber = -1;
			int mSalary = kDefaultStartingSalary;
			bool mHired = false;
		public:
			Employee() = default;
			Employee(const string &firstName,
				const string &lastName);
			void promote(int raiseAmount = 1000);
			void demote(int demeritAmount = 1000);
			void hire(); // Hires or rehires the employee
			void fire(); // Dismisses the employee
			void display(); // Outputs employee info to console

			// Getters and setters
			void setFirstName(const string &firstName);
			const string &getFirstName() const;
			void setLastName(const string &lastName);
			const string &getLastName() const;

			int getEmployeeNumber() const;
			void setEmployeeNumber(int employeeNumber);

			int getSalary() const;
			void setSalary(int salary);

			bool isHired() const;
	};
}

