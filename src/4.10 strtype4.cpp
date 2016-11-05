// strtype4.cpp -- line input
#include <iostream> 
#include <string> 
#include <cstring> 
int main(){
	using namespace std;
	
	// 字面值 原始字符串声明R
//	cout << R"+*(asas "\n" dsa "\t"  sal.)*+" << endl;
	
	
	char charr[20];
	string str;
	
	cout << "length of string in charr before input: "
		 << strlen(charr) << endl;
	cout << "length of string in str before input: "
		 << str.size() << endl;
	cout << "input a line of text:\n";
	
	//读入到数组中 
	cin.getline(charr,20);
	cout << charr << endl;
	
	cout << "input another line of text:\n";
	
	//读入到字符串中 
	getline(cin,str);
	cout << str << endl;
	
	cout << "length of string in charr after input: "
		 << strlen(charr) << endl;
	cout << "length of string in str after input: "
		 << str.size() << endl;
	
	 
	return 0;
}
