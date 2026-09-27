#include<iostream>
using namespace std;
int main () {
	int array[10]; 
	
    for(int i = 0; i < 10; i++) {
        array[i] = i + 1;
    }

    cout << "Array elements: ";
    for(int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }

    return 0;
}