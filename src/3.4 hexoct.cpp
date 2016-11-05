// hexoct2.app -- display values in hex and octal

#include <iostream>

int main() {
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << hex; 
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << oct;
	cout << "inseam = " << inseam << " (042 in octal)\n";
	
	
	//chartype.cpp -- the char type
	char d;
	cin >> d;
	int dint=d;
	
	cout << "input char is: " << d << " character. "<<endl;
	cout << "the ascll code for : " <<d<<" is "<< dint <<endl;

	d=d+1;
	dint=d;
	
	cout << "the char add 1 is: " << d << " character. "<<endl;
	cout << "the ascll code for : " <<d<<" is "<< dint <<endl;
	cout << "\a";
	
	
	
	return 0;
}
