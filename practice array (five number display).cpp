#include<iostream>
using namespace std;
int main (){
	int arr[5];
	int sum=0;
	for(int i=0;i<5;i++){
		cout <<"enter a number";
		cin >>arr[i];
    sum +=arr[i];
	}
	cout <<"the sum of the number are"<<sum<<endl;
	return 0;
}
	