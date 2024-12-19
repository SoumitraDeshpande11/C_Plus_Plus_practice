// Que. Create a file handling program in C++.
// a). Create a txt file
// b). Naming
// c). Error Checking
// d). Writing to a file
// e). Read from a file
// f). Append to a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fileName = "example.txt";
    string data;

  
    ofstream outFile(fileName);
    if (!outFile) {
        cout << "Error: Could not create file!" << endl;
        return 1;
    }
    cout << "Enter text to write to the file: ";
    getline(cin, data);
    outFile << data;
    outFile.close();
    cout << "Data written to " << fileName << endl;

 
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }
    cout << "Contents of the file:" << endl;
    while (getline(inFile, data)) {
        cout << data << endl;
    }
    inFile.close();

 
    ofstream appendFile(fileName, ios::app);
    if (!appendFile) {
        cout << "Error: Could not open file for appending!" << endl;
        return 1;
    }
    cout << "Enter text to append to the file: ";
    getline(cin, data);
    appendFile << endl << data;
    appendFile.close();
    cout << "Data appended to " << fileName << endl;

    return 0;
}