#include <iostream>
#include <string>
using namespace std;
string input() {
	cout << "enter string: ";
	string str;
	getline(cin, str);

	return str;
}

bool is_number(char c) {

	if (!isdigit(c)) return false;
	else return true;

}

void fill_array(string number, int& length2, string anyarr[100]) {
	if (number != "") {
		if (is_number(number[0]) == true) {
			length2++;
			anyarr[length2 - 1] = number;
		}
	}
}

void extract_nums_only(string str  , string arr[100] , int &l2) {
	string number_result = "";
	for (int i = 0; i < str.length(); i++) {
		if (is_number(str[i]) == true) number_result += str[i];
		else {
			fill_array(number_result, l2, arr);
			number_result = "";
		}
	}
	if (number_result !="") fill_array(number_result, l2, arr);
	
		
}

int final_num_sum(string number_result[100] , int length2) {
	int sum = 0; 
	for (int n = 0; n < length2; n++) {
		
		sum += stoi(number_result[n]);

	}
	return sum;
}

int main() {
	string arr[100];
	int length2 = 0;
	string full_sentence = input();
	extract_nums_only(full_sentence, arr, length2);

	cout << "\nthen the sum is: " << final_num_sum(arr, length2)<<endl;
}