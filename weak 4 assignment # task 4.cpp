#include <iostream>
using namespace std;

// Global variable
int globalCount = 10;

int main() {
    cout << "Initial globalCount = " << globalCount << endl;

 
    {
        int localVar = 5;  // Local variable (accessible only in this block)
        globalCount = 20;  // Modify global variable

        cout << "Inside block -> globalCount = " << globalCount << endl;
        cout << "Inside block -> localVar = " << localVar << endl;
    }

    // After the block
    cout << "After block -> globalCount = " << globalCount << endl;

   
    
       return 0;
}
