#include <iostream>
#include <string>
using namespace std;

string reverse_preserve_spaces(string str) {
    string only_chars = "";

    // Step 1: Get all characters without spaces
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ')
            only_chars += str[i];
    }


    // Step 2: Reverse only the characters
    reverse(only_chars.begin(), only_chars.end());

    // Step 3: Fill result keeping spaces in same positions
    string result = "";
    int char_index = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ')
            result += ' ';
        else {
            result += only_chars[char_index];
            char_index++;
        }
    }

    return result;
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    string res = reverse_preserve_spaces(s);
    cout << "Result: " << res << endl;

    return 0;
}
