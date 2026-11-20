
#include <iostream>
#include <string>
using namespace std;

string caesar(string text, int shift) {
    for (char &ch : text) {
        if (ch >= 'A' && ch <= 'Z')
            ch = (ch - 'A' + shift) % 26 + 'A';
        else if (ch >= 'a' && ch <= 'z')
            ch = (ch - 'a' + shift) % 26 + 'a';
    }
    return text;
}

int main() {
    int choice, shift;
    string message;

    cout << "1. Encrypt\n2. Decrypt\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();

    cout << "Enter message: ";
    getline(cin, message);

    cout << "Enter shift value: ";
    cin >> shift;
    shift = ((shift % 26) + 26) % 26;

    if (choice == 2)
        shift = (26 - shift) % 26;

    if (choice == 1 || choice == 2)
        cout << "Result: " << caesar(message, shift) << endl;
    else
        cout << "Invalid choice!" << endl;

    return 0;
}
