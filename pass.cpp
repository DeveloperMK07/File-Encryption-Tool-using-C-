#include <iostream>
#include <fstream>
#include <string>
#include <functional>
using namespace std;


string simpleHash(const string &pass) {
    hash<string> hasher;
    return to_string(hasher(pass));
}

void protectFile(const string &inFile, const string &password) {
    ifstream fin(inFile, ios::binary);
    if (!fin) {
        cerr << "❌ Could not open input file!\n";
        return;
    }

    string outFile = inFile + ".locked";
    ofstream fout(outFile, ios::binary);

    if (!fout) {
        cerr << "❌ Could not create protected file!\n";
        return;
    }

    
    fout << simpleHash(password) << "\n";

    char c;
    int i = 0;
    while (fin.get(c)) {
        c ^= password[i % password.size()]; 
        fout.put(c);
        i++;
    }

    fin.close();
    fout.close();

    remove(inFile.c_str()); 
    cout << "✅ File protected successfully: " << outFile << endl;
}

void accessFile(const string &lockedFile, const string &password) {
    ifstream fin(lockedFile, ios::binary);
    if (!fin) {
        cerr << "❌ Could not open locked file!\n";
        return;
    }

    
    string storedHash;
    getline(fin, storedHash);

    if (storedHash != simpleHash(password)) {
        cerr << "❌ Incorrect password! Access denied.\n";
        return;
    }

    string outFile = lockedFile.substr(0, lockedFile.find(".locked"));
    ofstream fout(outFile, ios::binary);

    if (!fout) {
        cerr << "❌ Could not restore file!\n";
        return;
    }

    char c;
    int i = 0;
    while (fin.get(c)) {
        c ^= password[i % password.size()]; // XOR decrypt
        fout.put(c);
        i++;
    }

    fin.close();
    fout.close();

    remove(lockedFile.c_str()); // delete encrypted version
    cout << "✅ File unlocked successfully: " << outFile << endl;
}

int main() {
    int choice;
    string file, pass;

    cout << "---------------------------\n";
    cout << "   Simple File Protector\n";
    cout << "---------------------------\n";
    cout << "1. Protect File\n";
    cout << "2. Access File\n";
    cout << "Choice: ";
    cin >> choice;

    cout << "Enter file name: ";
    cin >> file;

    cout << "Enter password: ";
    cin >> pass;

    if (choice == 1)
        protectFile(file, pass);
    else if (choice == 2)
        accessFile(file, pass);
    else
        cout << "❌ Invalid choice!\n";

    return 0;
}
