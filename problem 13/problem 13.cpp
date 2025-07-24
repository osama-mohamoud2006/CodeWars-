#include<iostream>
#include <string>
using namespace std;
/*
For example:

"our code" => "edo cruo"
-- Normal reversal without spaces is "edocruo".
-- However, there is a space at index 3, so the string becomes "edo cruo"

"your code rocks" => "skco redo cruoy".
"codewars" => "srawedoc"


*/
string input() {
	string str;
	cout << "enter the string: ";
	getline(cin, str);
	return  str;
 }

void fill_index(int number, int arr[100], int& l2) {
	l2++;
	arr[l2 - 1] = number;

}


void fill_array_with_index(string str , int arr[100] , int &l2) {

	int index_to_pass = 0; 
	for (int index = 0; index < str.length(); index++) {
		// to get the inderx od first word
		if (str[index] != ' ') index_to_pass++;
		else {
			fill_index(index_to_pass, arr, l2);
		} // 4 , 7 , 10 
	}


	
}

void string_with_og_index(string str, int arr[100], int l2) {
	string result = "";
	for (int in = 0; in < l2; in++) {
		// 4 

		for (int g = str.length()-1; g >= 0; g--) {
			
			int count = arr[in]; // 4
			if (count != 0)result += str[g];
			count--;

		}


	}
	cout << "the result: " << result << endl;

}

int main() {
	int arr[100];
	int l2 = 0; 
	string str = input();
	fill_array_with_index(str, arr, l2);
	string_with_og_index(str, arr, l2);
}
