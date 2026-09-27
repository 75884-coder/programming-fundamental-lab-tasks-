#include<iostream>
using namespace std ;
void modifynum(int num){
	num=56;
	cout <<"num in the function "<< num<<endl;
}
int main (){
	int num;
	num=1;
	cout <<"my functin "<<num<<endl;
	modifynum(num) ;
	cout <<"the value after modifying "<<num;
	return 0;
	
}
	
