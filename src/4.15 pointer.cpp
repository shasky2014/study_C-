// pointer.cpp -- our first pinter variable
#include <iostream>
int main(){
	using namespace std;
	int updates =6 ;
	
	// 声明指针 ,
	// p_updates 是int型的指针 ,
	// *p_updates 是 int, 
	// int* 是指向int的指针 ,是一种符合类型,但是int*x,y 后x是int指针,y是int
	// 若要xy都是指针,可以int *x,*y;
	 
	int * p_updates;
	p_updates = & updates;
	
	cout << "Values   : updates= "<< updates<< " ,*p_updates = " << *p_updates <<endl;
	cout << "Addresses: &updates= "<< &updates<< " ,p_updates = " << p_updates <<endl;
	
	*p_updates+=1;
	cout << "now updates="<<updates<<endl;
	
	//4.16	
	int h=5;
	int* ph=&h; //int*是指针类型 ph是指针值(内存地址) 
	
	cout << "value od h = "<<h<<" ;adress of h= "<<&h<<endl;
	cout << "value od *ph = "<<*ph<<" ;adress of ph= "<<ph<<endl;
	
	return 0;
} 
