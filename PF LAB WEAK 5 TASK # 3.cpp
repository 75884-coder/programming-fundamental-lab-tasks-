# include<iostream> ;
using namespace std ;

int main () 
 {
int age, hasID, resYears, isChild;

 cout << "enter age " ;
 cin >> age ;
 cout << "hasID ( 1 = yes , 0 = no : )" ;
 cin >> hasID ;
 cout << "Enter number of residence years:" ;
 cin >> resYears ;
 cout << "  Is child? (1 = Yes, 0 = No):" ;
 cin >> isChild ;
 
 if ((age >= 18 && hasID == 1 && resYears >= 1) || isChild == 1)
 {
 	cout << " you are eligible " << endl ;
 }
 else 
 {
 	cout << "you are not eligible " << endl ;
 }
 
 return 0 ;
}