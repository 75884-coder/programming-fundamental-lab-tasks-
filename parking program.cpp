#include<iostream>
using namespace std ;
int main () {
	char choice ;
	cout << " M = motercycle " << endl ;
	cout << " C = car " << endl ;
	cout << " B = bus " << endl ;
	cin >> choice ;
	switch (choice) {
		case 'm' : case 'M' :
			cout << " motercycle " ;
			break ;
		case 'c' : case 'C' :
			cout << " car " ;
			break ;
		case 'b' : case 'B' :
			cout << " bus " ;
			break ;
		default :
			cout <<" invalid output " ;
	}
		return 0 ;
	
}