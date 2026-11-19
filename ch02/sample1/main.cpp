#include <iostream>
using std::endl;
using std::cout;
using std::string;

char * copy_str (const char * src) {
	char * new_buf = nullptr;
	new_buf = new char[strlen(src) + 1];

	if (nullptr != new_buf) {
		cout << "create new_buf used by new." << endl;
	}
	strcpy(new_buf, src);
	return new_buf;
}

int main() {

    cout << "===== PROGRAM START =====" << endl;

	char buf[] = "hello, world";
	char * new_buf = copy_str(buf);

	cout << "new_buf: " << new_buf << endl;
    std::cout << "===== STDOUT =====" << std::endl;

    std::cerr << "===== STDERR =====" << std::endl;

    std::fprintf(stderr, "===== C STDERR =====\n");

    if (nullptr != new_buf) {
		cout << "free new_buf used by delete[]." << endl;
		delete [] new_buf;
		new_buf = nullptr;
	}

    cout << "===== PROGRAM END =====" << endl;
	cout << endl;
	return 0;
}
