#include <iostream>
using namespace std;

int main() {
    // Declare a float variable for Celsius temperature
    float celsius;

    // Input temperature in Celsius from user
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    
    float fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Implicit type casting (float ? int)
   
    int fahrImplicit = fahrenheit;

    // Forces conversion manually
    int fahrExplicit = (int)fahrenheit;

    // Display results
    cout << "Fahrenheit (float) = " << fahrenheit << endl;
    cout << "Fahrenheit (int) using implicit casting = " << fahrImplicit << endl;
    cout << "Fahrenheit (int) using explicit casting = " << fahrExplicit << endl;

return 0;
}