// strtype1.cpp -- using the C++ string class
#include <iostream>

//用string  需要加载这个项目 
#include <string>
int main(){
	using namespace std;
	string str1;
	string str2 = "panther";
	
	cout << "Enter stra:";
	cin >> str1;
	
	cout<<"str1: "<< str1 <<endl;
	cout<<"str2: "<< str2 <<endl;
	cout << "str1+str2: " <<str1+str2<<endl;
	string str3=str2;
	cout<<"str3: "<<str3<<endl;
	
	// string type have size() function.
	cout<<"str3 lengths: "<<str3.size()<<endl;

	return 0;
}

