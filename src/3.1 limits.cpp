//limits.cpp --some intager limits
# include <iostream>
# include <climits>

int main(){
	using namespace std;
	
	short nShort = SHRT_MAX;
	int nInt = INT_MAX;
	long nLong = LONG_MAX;
	long long nLLong = LLONG_MAX;
	
	cout << " short is "<< sizeof nShort <<" bytes."<<endl;
	cout << " int is "<< sizeof(int) <<" bytes."<<endl;
	cout << " long is "<< sizeof nLong <<" bytes."<<endl;
	cout << " long long is "<< sizeof nLLong <<" bytes."<<endl;
	cout << endl;
	
	
	cout << " Maximum values:" << endl;
	cout << " short : "<< nShort <<endl;
	cout << " int : "<< nInt <<endl;
	cout << " long : "<<  nLong <<endl;
	cout << " long long : "<<  nLLong <<endl;
	
// Maximum values:
// short : 32767
// int : 2147483647
// long : 2147483647
// long long : 9223372036854775807
	
	//基本初始化方式 
	int a;
	a={};
	int a1=5;
	int a3(22);
//	a=4; 
	//C++11 初始化方式 
	int a2 = {5};
	int a4{50};
	cout << "a:\t" << a << endl
		 << "a1:\t" << a1 << endl
		 << "a2:\t" << a2 << endl
		 << "a3:\t" << a3 << endl
		 << "a4:\t" << a4 << endl;
	
	
	
	return 0; 
}
