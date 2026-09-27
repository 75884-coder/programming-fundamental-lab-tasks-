#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int rowSum[3] = {0, 0, 0};
    cout << "Enter 9 elements for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            rowSum[i] += arr[i][j];
        }
    }
    int maxSum = rowSum[0];
    int maxRow = 0;

    for (int i = 1; i < 3; i++) {
        if (rowSum[i] > maxSum) {
            maxSum = rowSum[i];
            maxRow = i;
        }
    }
    cout << "\nSum of each row:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Row " << i + 1 << ": " << rowSum[i] << endl;
    }
    cout << "\nRow with maximum sum is Row " << maxRow + 1 
         << " with sum = " << maxSum << endl;

    return 0;
}
