#include<iostream>
using namespace std ;
int main (){
	int marks;
	cout << "Enter the marks:";
	cin >> marks;
	if (marks<=100 && marks>=80){
		cout <<"grade 'A' ";
	}
	else if (marks<=79 && marks>=60){
		cout << "grade 'b' ";
	}
	else if (marks<=59 && marks>=50){
		cout <<"grade 'C'";
	}
	else if (marks<=49 && marks>=40){
		cout<<"grade 'D' ";
		
	}
	else if (marks<=39&&marks==0){
		cout <<"grade 'F' ";
		
	}
	else {
		cout << "invalid marks ";
	}
	return 0;
}