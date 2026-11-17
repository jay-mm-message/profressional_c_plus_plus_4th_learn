#include <iostream>
using namespace std;

class T {
	public:
		T(): d {1 , 2, 3, 4, 5} {};
	public:
		int d[5];
	public:
		void show() {
			for (auto i : d)
				cout << i << ' ' << endl;
		}
};

int main() {
	// auto d {1, 2, 3, 4};
	// for(auto i : d)
	// 	cout << i << ' ' << endl;
	// auto d[] {1, 2};
	// cout << d << endl;
	T myT;
	myT.show();

	return 0;
}