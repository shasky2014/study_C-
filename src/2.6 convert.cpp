// convert.cpp --converts stone to pounds
#include <iostream>
using namespace std;

//����ԭ�� 
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

// ת������,ת����ϵ:һӢʯ(stone)=14��(pounds) 
int stonetolb(int sts){
	return sts*14;
}

