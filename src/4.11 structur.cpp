// strtype4.cpp -- line input
#include <iostream> 
#include <string> 
#include <cstring> 
//keyword: �ṹ struct
//�ùؼ��� struct �����µ� �ṹ 
//�ں���������,���Ը����������,���ڲ�����ֻ�е�ǰ�������� 
struct infl{
	char name[20];
	float vol;
	double price;
};


int main(){
	using namespace std;
	
	//��ʼ���ķ�ʽ 
	infl guest={"Glorious  Gloria",1.88,29.99};
	infl pal{"Audacious Arthur",3.12,32.99};//(=)�ǿ�ѡ�� 
	
	cout << "name \t\t\tprice\n" <<guest.name<<"\t"<<guest.price <<endl
		 <<pal.name<<"\t"<<pal.price<<endl;
	cout << "all price: "<< guest.price+pal.price << endl;
	
	infl kong {};
	//��ֵ������ᱨ��,�����ᱨ��.��ʼ�����ַ���Ϊ�մ�,����Ϊ0. 
	cout <<kong.name <<"\t"<<kong.vol<<"\t"<<kong.price<<endl; 
	
	//���ƽṹ����һ��ͬ���͵Ľṹ
	kong =  pal; 
	cout << "after copy pal to kong:\n" <<kong.name <<"\t"<<kong.vol<<"\t"<<kong.price<<endl; 
	
	cout << "infl list:" <<endl;
	infl guests[2]={
	{"Glorious  Gloria",1.88,29.99},
	{"Audacious Arthur",3.12,32.99}
	};
	cout <<guests[0].name <<"\t"<<guests[0].vol<<"\t"<<guests[0].price<<endl; 
	cout <<guests[1].name <<"\t"<<guests[1].vol<<"\t"<<guests[1].price<<endl; 
	
	return 0;
} 



// 2722361181
// 34104215a


