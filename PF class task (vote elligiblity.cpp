#include <iostream >
using namespace std ;
int main (){
	int age ;
	int citizan;
	cout << "Enter your age :";
	cin >>age ;
	cout << "are you a citizan of this country ?(1 for yes and 0 for no )";
	cin >> citizan;
	if ( age>=18 && citizan==1 ) {
		cout <<"you are elligible for vote ";
		
	}
	else {
		cout <<"you are not elligible for vote ";
	}
	return 0;
}