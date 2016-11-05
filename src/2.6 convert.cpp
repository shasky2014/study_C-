// convert.cpp --converts stone to pounds
#include <iostream>
using namespace std;

//函数原型 
int stonetolb(int);

int main(){
	int stone;
	cout<<"Enter the weight in stone: ";
	cin>>stone;
	int pounds = stonetolb(stone);
	cout << stone <<" stone = "
		 << pounds << " pounds."
		 <<endl;
	return 0;
}

// 转化函数,转化关系:一英石(stone)=14磅(pounds) 
int stonetolb(int sts){
	return sts*14;
}

