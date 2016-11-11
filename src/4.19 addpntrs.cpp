//addpntrs.cpp -- pointer addition
#include <iostream>
using namespace std;
int main(){
	double wages[3] = {1000.0,2000.0,3000.0};
	short stack[3]={3,2,1};
	// 两种得到数组指针的方法
	double * pw = wages;    //数组的名称 = address 
	short * ps = &stack[0]; //或者用 address operator
	// with array element
	cout <<"pw="<<pw<<", *pw="<<*pw<<endl;
	pw=pw+1;
	cout <<"pw="<<pw<<", *pw="<<*pw<<endl;
	//pw是指针,*pw是指针对应的内容 
	
	cout <<"ps="<<ps<<", *ps="<<*ps<<endl;
	ps=ps+1;
	cout <<"ps="<<ps<<", *ps="<<*ps<<endl;
	
	cout << "stack[0]="<<stack[0]<<", stacks[1]="<<stack[1]<<endl;
	cout << "*stack="<<*stack<<", *(stack+1)"<<*(stack+1)<<endl;
	// 数组名是指针,
	// *数组名  对应的是数组的第一个位置的内容,
	// 数组名[] 对应的是括号对应的位置的内容 
	
	cout << sizeof(wages)<<" = size of wages array\n" ;
	cout << sizeof(pw) << " = size of pw pointer\n";
	
	return 0;
}
