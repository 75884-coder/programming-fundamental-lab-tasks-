#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string course;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s;
    ofstream outFile("students.txt");

    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << endl;

        cout << "ID: ";
        cin >> s.id;
        cin.ignore();

        cout << "Name: ";
        getline(cin, s.name);

        cout << "Course: ";
        getline(cin, s.course);

        outFile << s.id << endl;
        outFile << s.name << endl;
        outFile << s.course << endl;
    }

    outFile.close();
    cout << "Student records saved to file successfully."<<endl;

    ifstream inFile("students.txt");
    cout << "Student Records from File:"<<endl;

    while (inFile >> s.id) {
        inFile.ignore();
        getline(inFile, s.name);
        getline(inFile, s.course);

        cout << "ID: " << s.id << endl;
        cout << "Name: " << s.name << endl;
        cout << "Course: " << s.course << endl << endl;
    }
    inFile.close();

    string searchName;
    cout << "Enter name to search: ";
    getline(cin, searchName);

    inFile.open("students.txt");
    bool found = false;

    while (inFile >> s.id) {
        inFile.ignore();
        getline(inFile, s.name);
        getline(inFile, s.course);

        if (s.name == searchName) {
            cout << "Student Found:"<<endl;
            cout << "ID: " << s.id << endl;
            cout << "Name: " << s.name << endl;
            cout << "Course: " << s.course << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found."<<endl;
    }

    inFile.close();
    return 0;
}
