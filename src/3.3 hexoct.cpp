//hexoct1.cpp -- show hex and octal literals
#include <iostream>
int main() {
	using namespace std;
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	//chest = 42 (42 in decimal)
	//waist = 66 (0x42 in hex)
	//inseam = 34 (042 in octal)
	return 0;
}