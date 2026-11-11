#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
	cout << "new world" << endl;
	int n_cnt = 0;

	while(n_cnt < argc) {
		cout << argv[n_cnt++];
		cout << endl;
	}
	return 0;
}