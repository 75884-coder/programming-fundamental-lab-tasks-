#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int largest;

    cout << "Enter 16 elements for the 4x4 array:" << endl;

    cin >> arr[0][0];
    largest = arr[0][0];

    for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        if (i == 0 && j == 0); 
        cin >> arr[i][j];

        if (arr[i][j] > largest) {
        largest = arr[i][j];
        }
    }
    }
    cout << "The largest element in the 4x4 array is: " << largest << endl;

    return 0;
}
