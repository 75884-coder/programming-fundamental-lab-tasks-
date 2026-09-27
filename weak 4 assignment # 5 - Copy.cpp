#include <iostream>
using namespace std;

int main() {
    int qty;          // quantity (integer)
    float price;      // price per item (float)
    float total;      // total (float)
    int totalInt;     // total totalint

    // Input values
    cout << "Enter quantity (int): ";
    cin >> qty;
    cout << "Enter price (float): ";
    cin >> price;

     total = qty * price;  // Compute total as qty * price

    
    totalInt = (int)total; // assignment with explicit cast

    // Display results
    cout << "Total (float) = " << total << endl;
    cout << "Total (int)   = " << totalInt << endl;
    
       return 0;
}
