// outfunc.cpp --defining your on function
#include <iostream>
void simon(int); //function prototype for simon()
int getsim(int,int);

int main(){
	using namespace std;
	int count;
	cin >> count;
	simon(count);
	
	int y=5;
	cout << "getsim: " <<getsim(count,y)<<endl;
	
	return 0;
	// 默认返回值为0,表示程序成功退出. 
	// 非0则意味着存在问题. 
}

void simon(int n){
	using namespace std;
	
	cout << "Simon says touch your toes " 
		 <<n
		 <<" times."
		 <<endl;
}

int getsim(int x,int y){
	return x*y+100;
};
