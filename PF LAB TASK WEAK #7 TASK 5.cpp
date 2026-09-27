#include<iostream> 
using namespace std ;
int main () {
	int a,b,fact=1 ;
	cout <<"enter a number " ;
	cin >> a ;
	for (b=1;b<=a;b++) 
	fact *= b ;
	cout << "the factorial of "<<a<<" is "<<fact<<endl;
	return 0 ;
}
