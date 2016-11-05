//keyword: 共同体 union,枚举 enum
#include <iostream> 
#include <string> 
#include <cstring> 
using namespace std;
union id{
	long id_num;
	char id_char[20];
};
//D:\workspace\c++\4.14 address.cpp	
//[Error] member 'std::string id::id_char' with constructor not allowed in union
//union中不能有string类型 

//25	16	D:\workspace\c++\4.14 address.cpp	
//[Error] incompatible types in assignment of 'const char [6]' to 'char [20]'
//用strcpy复制字符串到char 
enum colour{
	red,
	orange,
	yellow,
	green,
	blue,
	violet,
	indigo,
	ultraviolet
};
// 

int main(){
	id id_aa;
	strcpy(id_aa.id_char,"Adfse");
	id id_bb;
	id_bb.id_num=234312L;
	colour col_aa=blue;
	colour col_bb=red;
	
	cout <<"id_aa string: " <<id_aa.id_char<<endl;
	cout <<"id_bb intege: " <<id_bb.id_num<<endl;
	cout <<"col_aa intege: " <<col_aa<<endl;
	cout <<"col_bb intege: " <<col_bb<<endl;
	
	return 0;
} 

