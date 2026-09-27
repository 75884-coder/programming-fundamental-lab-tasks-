#include<iostream>
using namespace std;
int sum (int x ,int y);
int main (){
int a,b,r;
cout <<"enter 2 number "<<endl;
cin >>a>>b;
r = sum (a,b);
cout <<"sum is :"<<r;
return 0;	
}
int sum ( int x, int y){
	int sum;
	sum =x+y;
	return sum;
	
}