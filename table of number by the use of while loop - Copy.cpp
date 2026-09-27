#include<iostream>
using namespace std ;
int main () {
	int i=1;
	int num;
	cout<<"enter a number ";
	cin>>num;
	do{
		cout <<num<<" X "<<i<<" = "<<num*i<<endl;
		i++;
		
	}while (i<=20); 
	return 0;
}