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