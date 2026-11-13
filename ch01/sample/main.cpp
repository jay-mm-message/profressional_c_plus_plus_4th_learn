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