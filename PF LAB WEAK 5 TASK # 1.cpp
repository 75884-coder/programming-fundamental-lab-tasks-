#include<iostream>

using namespace std ;
int main ()  {
;
int a , b ;   // Variables to store integer
char op ;    // Variable to store operator (+, -, *, /, %)

 // Input two integers and an operator
 
 cout << "enter first number " ;
 cin >> a ;
 cout << "Enter operator (+, -, *, /, %):" ;  
 cin >> op ;
 cout << "enter second number " ;
 cin >> b ;
 
 // Perform operation based on the operator entered
 switch (op)
 {
 	case '+':
 	cout << "result = " << a+b ;
 	break ;
 	
 	case '-' :
 	cout << "result = " << a-b ;
 	break ;
 	
 	case '*' :
 	cout << "result = " << a*b ;
 	break ;
 	
 	case '/' :
 		if (b==0)
 	cout << "Error: Division by zero! " ; // Check for division by zero
 	else
 	cout << "result = " << a/b ;
 	break ;
 	
 	case '%' :
 		if (b==0)
 	cout << " Error: Modulus by zero" ; // Check for modulus by zero
 	else
 	cout << "result = " << a % b ;
 	break ;
 	default :
 	cout<< "Invalid operator" ;   // If operator is not one of +, -, *, /, %
 	
 	return 0 ;
 	 }
 }