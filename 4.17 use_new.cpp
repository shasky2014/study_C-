// use_new.cpp -- using the new operator
#include <iostream>
using namespace std;

int main(){
	int night = 1001;
	int *pt =new int;

	//*指针=值,&值=指针
	*pt = 1001;
	
	cout << "nights value= "<<night<<" \t:location "<<&night<<endl;
	cout << "int    value= "<< *pt <<" \t:location "<<pt<<endl;
	
	double *pd = new double;
	*pd = 100000001.0;
	cout << "double value= "<< *pd <<" \t:location "<<pd<<endl;
	
	
	
	
	return 0;
} 
