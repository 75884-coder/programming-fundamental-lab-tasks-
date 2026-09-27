#include<iostream>
using namespace std ;
int main (){
	int arr[6];
	int largest;
	for (int i=0;i<6;i++){
		cout<<"enter six numbers";
		cin >>arr[i];
	}
	largest=arr[0];
	for (int i=0;i<6;i++){
	     if (arr[i]>largest){
	     	largest=arr[i];
		 }	
	
	}
	return 0;
}