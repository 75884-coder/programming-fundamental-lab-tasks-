#include <iostream>
using namespace std;

int main() { 
    int secret = rand() % 10 + 1; 

    int guess;

    do {
        cout << "Guess the number (1 to 10): ";
        cin >> guess;

        if(guess != secret) {
            cout << "Wrong guess! Try again.\n";
        }

    } while(guess != secret);

    cout << "Correct! The number was " << secret << ".";

    return 0;
}
