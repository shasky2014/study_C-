// strtype4.cpp -- line input
#include <iostream> 
#include <string> 
#include <cstring> 
//keyword: 结构 struct
//用关键字 struct 声明新的 结构 
//在函数外声明,可以给多个函数用,再内部声明只有当前函数能用 
struct infl{
	char name[20];
	float vol;
	double price;
};


int main(){
	using namespace std;
	
	//初始化的方式 
	infl guest={"Glorious  Gloria",1.88,29.99};
	infl pal{"Audacious Arthur",3.12,32.99};//(=)是可选项 
	
	cout << "name \t\t\tprice\n" <<guest.name<<"\t"<<guest.price <<endl
		 <<pal.name<<"\t"<<pal.price<<endl;
	cout << "all price: "<< guest.price+pal.price << endl;
	
	infl kong {};
	//空值的输出会报警,但不会报错.初始化的字符串为空串,数字为0. 
	cout <<kong.name <<"\t"<<kong.vol<<"\t"<<kong.price<<endl; 
	
	//复制结构给另一个同类型的结构
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


