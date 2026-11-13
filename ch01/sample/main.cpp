#include <iostream>
using namespace std;

namespace m_scope_1
{
	void func() {
		cout << "m_scope_1::func()" << endl;
	}
}

namespace m_scope_2
{
	void func() {
		cout << "m_scope_2::func()" << endl;
	}
}

#if 0
int main(int argc, char * argv[]) {
	cout << "new world" << endl;
	int n_cnt = 0;

	while(n_cnt < argc) {
		cout << argv[n_cnt++];
		cout << endl;
	}

	m_scope_1::func();
	m_scope_2::func();

	cout << endl;
	return 0;
}
#endif

#if 0
int main() {
	using std::endl;
	using std::cout;

	bool ant = true;
	(ant)? cout << "true" : cout << "false";
	cout << endl;
	ant = !ant;
	(ant)? cout << "true" : cout << "false";
	cout << endl;

	return 0;
}
#endif

#if 0
int main() {
	using std::cout;
	using std::endl;

	enum PieceType { PieceTypeKing, PieceTypeQueen, PieceTypeRook, PieceTypePawn };

	int type = 0;
	PieceType myPiece = static_cast<PieceType>(type);

	while(myPiece <= PieceType::PieceTypePawn) {
		switch(myPiece) {
			case PieceType::PieceTypeKing:
				cout << "PieceType::PieceTypeKing";
				break;
			case PieceType::PieceTypeQueen:
				cout << "PieceType::PieceTypeQueen";
				break;
			case PieceType::PieceTypePawn:
				cout << "PieceType::PieceTypePawn";
				break;
			case PieceType::PieceTypeRook:
				cout << "PieceType::PieceTypeRook";
				break;
			default:
				break;
		}
		++type;
		myPiece = static_cast<PieceType>(type);
		cout << endl;
	}
	cout << endl;
	return 0;
}
#endif

#if 0
int main() {
	struct Employee {
		char firstInitial;
		char lastInitial;
		int employeeNumber;
		int salary;
	};

	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 4;
	anEmployee.salary = 80000;

	cout << "Employee: " << anEmployee.firstInitial << " " << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;
	return 0;
}
#endif

#if 0
int main() {

	int number = 0;
	while(number < 11) {
		if (unsigned int salary = number ; salary <= 10) {
			cout << "salary :" << salary << endl;
		}
		++number;
	}

	return 0;
}
#endif

#if 0
int main() {
	enum Color { DarkBlue, Black, Red, Green };

	unsigned int i = 0;
	Color backgroundColor = static_cast<Color>(i);
	while(backgroundColor <= Color::Green) {
		switch(backgroundColor) {
			case Color::DarkBlue:
				cout << "Color::DarkBlue" << endl;
				break;
			case Color::Black:
				cout << "Color::Black" << endl;
				break;
			case Color::Green:
				cout << "Color::Green" << endl;
				break;
			case Color::Red:
				cout << "Color::Red" << endl;
				break;
			default:
				break;
		}
		++i;
		backgroundColor = static_cast<Color>(i);
	}
}
#endif

// c++17 provide new call function name
void addNum(int numb_1, int numb_2, int &sum_num) {
	cout << "func: " << __func__ << endl;
	sum_num = numb_1 + numb_2;
}

int main() {

	int i = 3, j = 2, sum = 0;
	addNum(i, j, sum);
	cout << i << " + " << j << " = " << sum;

	cout << endl;
	return 0;
}