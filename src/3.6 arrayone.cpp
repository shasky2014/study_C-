// arrayone.cpp -- small arrays of integers
#include <iostream>
int main(){
	using namespace std;
	int y[3];
	y[0]=7;
	y[1]=8;
	y[2]=6;
	
	int y2[3]={20,30,5};
	int y3[3] {20,30,5};
	
	cout << "y[0]: "<<y[0]<<endl
		 << "y[1]: "<<y[1]<<endl
		 << "y[2]: "<<y[2]<<endl;
	cout << "y2[0]: "<<y2[0]<<endl
		 << "y2[1]: "<<y2[1]<<endl
		 << "y2[2]: "<<y2[2]<<endl;
		 
	cout << sizeof y /sizeof(int);
	return 0;
}
