#include <iostream>
using namespace std;

int main() {
	char text_1[] = "abcdef";

	size_t s1 = sizeof(text_1);
	size_t s2 = strlen(text_1);

	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;

	cout << endl;
	return 0;
}