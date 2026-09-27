#include <iostream>   // lets us use cout and cin
#include <iomanip>    // lets us use setprecision (for 2 decimal places)
using namespace std;

int main() {
    int n; // number of integers we will read
    cout << "Enter how many numbers: ";
    cin >> n; // user enters how many numbers they want to input

    // If the user enters zero or a negative number, it’s invalid
    if (n <= 0) {
        cout << "Invalid input!" << endl;
        return 0; // program ends here
    }

    // Declare variables
    int num;           // to store each number entered
    int sum = 0;       // to store the total sum
    int evenCount = 0; // count of even numbers
    int oddCount = 0;  // count of odd numbers
    int minVal, maxVal; // smallest and largest numbers

    cout << "Enter " << n << " integers:" << endl;

    // Step 1: Read the first number (this helps to set min and max correctly)
    cin >> num;
    sum = num;          // first number added to sum
    minVal = num;       // assume first number is the smallest
    maxVal = num;       // assume first number is the largest

    // Check if even or odd
    if (num % 2 == 0)
        evenCount++;
    else
        oddCount++;

    // Step 2: Read the remaining (n - 1) numbers
    for (int i = 1; i < n; i++) {
        cin >> num; // read next number
        sum += num; // add to sum

        // Check if it’s smaller than current min
        if (num < minVal)
            minVal = num;

        // Check if it’s bigger than current max
        if (num > maxVal)
            maxVal = num;

        // Check if even or odd
        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Calculate the average
    double average = static_cast<double>(sum) / n; 
    

    
    cout << fixed << setprecision(2); // show 2 digits after decimal point
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
