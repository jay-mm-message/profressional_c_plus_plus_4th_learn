#include <iostream>
using std::endl;
using std::cout;
using std::string;

char *copy_str(const char *buf_1, const char *buf_2, const char *buf_3) {
	char *ret = new char[strlen(buf_1) + strlen(buf_2) + strlen(buf_3) + 1];
	strcpy(ret, buf_1);
	strcpy(ret + strlen(buf_1), buf_2);
	strcpy(ret + strlen(buf_1) + strlen(buf_2), buf_3);
	return ret;
}

int main() {
	char buf_1[] = "hello";
	char buf_2[] = ", ";
	char buf_3[] = "world";

	char * ret = copy_str(buf_1, buf_2, buf_3);

	cout << "ret: " << ret << endl;

	if (ret != nullptr) {
		cout << "free dynamic memory" << endl;
		delete [] ret;
		ret = nullptr;
	}

	cout << endl;
	return 0;
}