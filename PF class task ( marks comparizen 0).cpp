#include<iostream>
using namespace std ;
int main (){
	int mark1,mark2;
	cout <<"enter the marks of the PF :";
	cin >> mark1;
	cout <<"enter the mark of the ICT :";
	cin >>mark2;
	if (mark1>mark2) {
		cout <<"PF marks are more then ict ";	
	}
	else if ( mark2>mark1) {
		cout <<" ICT marks are grater then PF";
		
	}
	else {
		cout << "both have same marks ";
		
	}
return 0;
	
}