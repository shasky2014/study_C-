// pointer.cpp -- our first pinter variable
#include <iostream>
int main(){
	using namespace std;
	int updates =6 ;
	
	// ����ָ�� ,
	// p_updates ��int�͵�ָ�� ,
	// *p_updates �� int, 
	// int* ��ָ��int��ָ�� ,��һ�ַ�������,����int*x,y ��x��intָ��,y��int
	// ��Ҫxy����ָ��,����int *x,*y;
	 
	int * p_updates;
	p_updates = & updates;
	
	cout << "Values   : updates= "<< updates<< " ,*p_updates = " << *p_updates <<endl;
	cout << "Addresses: &updates= "<< &updates<< " ,p_updates = " << p_updates <<endl;
	
	*p_updates+=1;
	cout << "now updates="<<updates<<endl;
	
	//4.16	
	int h=5;
	int* ph=&h; //int*��ָ������ ph��ָ��ֵ(�ڴ��ַ) 
	
	cout << "value od h = "<<h<<" ;adress of h= "<<&h<<endl;
	cout << "value od *ph = "<<*ph<<" ;adress of ph= "<<ph<<endl;
	
	return 0;
} 
