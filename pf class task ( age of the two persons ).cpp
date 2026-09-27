#include<iostream>
using namespace std ;
int main  (){
	int age1,age2;
	cout <<"enter the age of the first person :";
    cin >> age1;
	cout <<"enter the age of the second person :";
    cin >>age2;
    if ( age1>age2) {
    	cout << "the age age of the first person is grater then second one"<<endl;
    	
	}
	else if ( age2>age1) {
		cout <<" the age of the second person is grater then the first one "<<endl;
		 
	}
	else {
		cout <<"both have the same age "<<endl;
		
	}
	return 0;
	
}