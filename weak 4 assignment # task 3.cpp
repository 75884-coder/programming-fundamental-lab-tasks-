#include <iostream>
using namespace std;

int main() {
    // Declare integer variable for counter
    int counter;

    // Input counter value from user
    cout << "Enter an integer counter value: ";
    cin >> counter;

    // Post-increment: counter++
    // Prints the current value first, 
    cout << "Using counter++ (post-increment): " << counter++ << endl;

    // Print the updated value after post-increment
    cout << "Value after counter++: " << counter << endl;

    // Pre-increment: ++counter
    // Increments first, then prints the new value
    cout << "Using ++counter (pre-increment): "  << ++counter << endl;

    // Post-decrement: counter--
    // Prints the current value first, then decrements
    cout << "Using counter-- (post-decrement): " << counter-- << endl;

    // Print the updated value after post-decrement
    cout << "Value after counter--: " << counter << endl;

    // Pre-decrement: --counter
    // Decrements first, then prints the new value
    cout << "Using --counter (pre-decrement): " << --counter << endl;

  return 0 ;
}