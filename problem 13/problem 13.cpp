#include<iostream>
#include <string>
using namespace std;
string input() {
	string str;
	cout << "enter string: ";
	getline(cin, str);
	return str; 
 }

string get_word_without_spaces(string str) {
	string word = "";
	for (int f = 0; f < str.length(); f++)
		if(str[f]!=' ')word += str[f];
	return word;
}

string reverse_word(string word) {
	string reversed = "";
	for (int r = word.length() - 1; r >= 0; r--)
		reversed += word[r];
	return reversed;
}

void final_output(string reversed , string word ) {
	string result = "";
	int index = 0; 
	for (int o = 0; o < word.length(); o++) {
			if(word[o]!=' ') result += reversed[index++];
		if (word[o] == ' ') result += ' ';
	
	}
	cout << "\nthe output " << result << endl;
}

int main() {
	string word_input = input(); 
	string word = get_word_without_spaces(word_input);
	final_output(reverse_word(word), word_input);
}