#include <iostream>
using namespace std;

int main() {
    // Declare three integer variables for marks
    int mark1, mark2, mark3;

    // Input marks from the user
    cout << "Enter three integer marks: ";
    cin >> mark1 >> mark2 >> mark3;

    // sum these three numbers 
    int sum = mark1 + mark2 + mark3;


    // add float command 
    float average = (float)sum / 3;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

   return 0 ;

}