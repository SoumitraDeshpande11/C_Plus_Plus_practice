#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createFile(const string &filename) {
    ofstream file(filename);
    if (file) {
        cout << "File \"" << filename << "\" created successfully!" << endl;
        file.close();
    } else {
        cout << "Error creating the file \"" << filename << "\"!" << endl;
    }
}

void writeFile(const string &filename) {
    ofstream file(filename);
    if (!file) {
        cout << "Error opening the file \"" << filename << "\" for writing!" << endl;
        return;
    }

    string line;
    cout << "Enter text to write (end with #):" << endl;
    while (true) {
        getline(cin, line);
        if (line == "#") break;
        file << line << endl;
    }
    cout << "Text written successfully!" << endl;
    file.close();
}

void readFile(const string &filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening the file \"" << filename << "\" for reading!" << endl;
        return;
    }

    string line;
    cout << "Contents of \"" << filename << "\":" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void appendFile(const string &filename) {
    ofstream file(filename, ios::app);
    if (!file) {
        cout << "Error opening the file \"" << filename << "\" for appending!" << endl;
        return;
    }

    string line;
    cout << "Enter text to append (end with #):" << endl;
    while (true) {
        getline(cin, line);
        if (line == "#") break;
        file << line << endl;
    }
    cout << "Text appended successfully!" << endl;
    file.close();
}

int main() {
    string filename;
    int choice;

    cout << "Enter the name of the file: ";
    cin >> filename;
    cin.ignore();

    while (true) {
        cout << "\nMenu:\n1. Create File\n2. Write to File\n3. Read File\n4. Append to File\n5. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: createFile(filename); break;
            case 2: writeFile(filename); break;
            case 3: readFile(filename); break;
            case 4: appendFile(filename); break;
            case 5: return 0;
            default: cout << "Invalid choice!" << endl;
        }
    }
}
