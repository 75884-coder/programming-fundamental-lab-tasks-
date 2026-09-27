#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int sum = 0;
    cout << "Enter 9 numbers for the 3x3 array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    cout << "The sum of all elements is: " << sum << endl;

    return 0;
}
