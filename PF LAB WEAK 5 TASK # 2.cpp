#include<iostream>

using namespace std ;

int main () {
int m1 , m2 , m3 ;   // variables for three subject marks
float persentage ;   // to store percentage

   cout << "enter your marks of 3 subjects (0 to 100):" << endl ;   // Input marks for three subjects
   cin >> m1 >>m2 >>m3 ;
   
   if ( m1<0 || m1>100 || m2<0 || m2>100 || m3<0 || m3>100 )   // Check if any mark is out of range
   {
   	cout << "invalid marks "  << endl ;
   }
   	else if ( m1<50 || m2<50 || m3<50 )       // Check if any subject mark is below 50
   {
   	
   	 cout << "failure"  <<  endl ;
   }
   	 else {
		
    persentage = (m1 + m2 + m3) / 3.0 ;    // Otherwise calculate percentage and grade
       
 cout << "percentage : " << persentage  <<endl;
   
   	if ( persentage >= 90 )     // Otherwise calculate percentage and grade
   	
   		cout << "A grade " << endl ;
	   
	else if  ( persentage >= 75 ) 
	
		cout << "B grade " << endl ;
	
	 else if  ( persentage >= 60) 
	
		cout << "C grade " << endl ;
	
	 else if ( persentage >= 50 ) 

		cout << "D grade " << endl ;
	}
	
	return 0 ;
	
   }
