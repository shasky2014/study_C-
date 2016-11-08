// arraynew.cpp --using the new operator for arrays
#include <iostream> 
using namespace std;
int main(){
	double* p3=new double[3];
	p3[0]=0.2;
	p3[1]=0.5;
	p3[2]=0.8;
	cout << "     p3[1] = "<<p3[1]<<".\n";
	p3=p3+1;
	cout <<"now: p3[0] = "<<p3[0]<<".\n";
	cout <<"     p3[1] = "<<p3[1]<<".\n";
	p3 =p3-1;
	cout <<"now: p3[0] = "<<p3[0]<<".\n";
	cout <<"     p3[1] = "<<p3[1]<<".\n";
	delete [] p3;
	return 0;
	/*
	指针算术在+1,-1的时候,是在指针位置上的加减,
	没有指针实际地址的加减. 
	*/
}
