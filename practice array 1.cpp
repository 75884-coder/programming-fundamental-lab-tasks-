#include <iostream>
using namespace std ;
int main () {
	int arr[5],sum=0;
	cout << "enter a five numbers"<<endl;
	for (int i=0;i<5;i++){
		cin >>arr[i];
		
	}
	for (int i=0;i<5;i++){
		sum+=arr[i];
		cout<<"the sum of the numbers are :"<<sum<<endl;
		
	}
	return 0;
	
}