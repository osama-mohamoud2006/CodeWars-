#include <iostream>


#include <string>
using namespace std;

bool is_char(string str) {
	
	for (int f = 0; f < str.length(); f++) {
		if (!(isdigit(str[f]))) return false;
	}
	return true;

}

void array_input(string arr[18]) {
	for (int i = 0; i < 18; i++)
	{
		cout << "enter " << i + 1 << " ";
		cin >> arr[i];
	}
}

int count_even(string arr[18]) {
	int count_even = 0; 
	for (int e = 0; e < 18; e++) {
		if (is_char(arr[e]) == false) continue;
			if (stoi(arr[e]) % 2 == 0) count_even++;
		
	}
	return count_even; 
}

int odd_count(string arr[18]) {
	int odd_even = 0;
	for (int o = 0; o < 18; o++) {
		if (is_char(arr[o]) == false) continue;
		
			if (stoi(arr[o]) % 2 != 0) odd_even++;
		
	}
	return odd_even;
}

int main() {
	string arr[18];
	array_input(arr);
	int even = count_even(arr);
	int odd = odd_count(arr);
	cout << "even - odd= " << even - odd << endl;
}