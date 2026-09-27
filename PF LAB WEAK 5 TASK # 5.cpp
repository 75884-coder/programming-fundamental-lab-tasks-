#include <iostream>
#include <string> 
#include <cctype>

using namespace std ;
int main () {
string password ;
bool hasupper= false, haslower = false,  hasdigit = false ;
cout << "enter your password ( no space ) :" ;
cin >> password ;
 if (password.length() >= 8) {
 	for (char c : password) {
 		 if (isupper(c))
 	  hasupper = true;
 	if (islower(c))
 	  haslower = true;
    if (isdigit(c)) 
	  hasdigit = true;  
      }
      
    if (hasupper && haslower && hasdigit)
        cout << "Strong password" << endl;
    else
        cout << "Weak password" << endl;
    }
    else {
        cout << "Weak password (too short)" << endl;
    }

    return 0;	
}
