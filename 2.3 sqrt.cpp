// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath> //or math.h

int main(){
	using namespace std;
	double area;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;
	side =sqrt(area);
	cout << side <<endl;
	return 0;
}
