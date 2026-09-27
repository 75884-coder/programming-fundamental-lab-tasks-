#include <iostream>
#include <iomanip>   
using namespace std;

int main() {
    int n;                  
    cout << "Enter how many numbers: ";
    cin >> n;

    int num;                 // variable for each number
    int sum = 0;             // sum of all numbers
    int evenCount = 0;       // count of even numbers
    int oddCount = 0;        // count of odd numbers
    int minNum, maxNum;      // for minimum and maximum values

    cout << "Enter number 1: ";
    cin >> num;
    sum = num;
    minNum = num;
    maxNum = num;
    if (num % 2 == 0)
    evenCount++;
    else
        oddCount++;
   
    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        sum += num;                  // add to sum

        if (num < minNum)            //  minimum number 
            minNum = num;
        if (num > maxNum)            //  maximum number
            maxNum = num;
        if (num % 2 == 0)            // check even or odd
            evenCount++;
        else
            oddCount++;
    }

    double average = static_cast<double>(sum) / n;

    // Print results
    cout << fixed << setprecision(2);  
    cout << "\nSum = " << sum;
    cout << "\nAverage = " << average;
    cout << "\nMinimum = " << minNum;
    cout << "\nMaximum = " << maxNum;
    cout << "\nEven numbers = " << evenCount;
    cout << "\nOdd numbers = " << oddCount << endl;

    return 0;
}
