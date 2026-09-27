#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    int trans[3][2];
    cout << "Enter 6 elements for the 2x3 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            trans[j][i] = arr[i][j];
        }
    }
    cout << "\nOriginal 2x3 Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nTransposed 3x2 Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
 return 0;
}
