//addpntrs.cpp -- pointer addition
#include <iostream>
using namespace std;
int main(){
	double wages[3] = {1000.0,2000.0,3000.0};
	short stack[3]={3,2,1};
	// ���ֵõ�����ָ��ķ���
	double * pw = wages;    //��������� = address 
	short * ps = &stack[0]; //������ address operator
	// with array element
	cout <<"pw="<<pw<<", *pw="<<*pw<<endl;
	pw=pw+1;
	cout <<"pw="<<pw<<", *pw="<<*pw<<endl;
	//pw��ָ��,*pw��ָ���Ӧ������ 
	
	cout <<"ps="<<ps<<", *ps="<<*ps<<endl;
	ps=ps+1;
	cout <<"ps="<<ps<<", *ps="<<*ps<<endl;
	
	cout << "stack[0]="<<stack[0]<<", stacks[1]="<<stack[1]<<endl;
	cout << "*stack="<<*stack<<", *(stack+1)"<<*(stack+1)<<endl;
	// ��������ָ��,
	// *������  ��Ӧ��������ĵ�һ��λ�õ�����,
	// ������[] ��Ӧ�������Ŷ�Ӧ��λ�õ����� 
	
	cout << sizeof(wages)<<" = size of wages array\n" ;
	cout << sizeof(pw) << " = size of pw pointer\n";
	
	return 0;
}
