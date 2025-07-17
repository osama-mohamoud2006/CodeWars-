#include <iostream>
#include <string>
using namespace std;
void input(string arr_input[100] , int &length ) {
	cout << "enter the number of words you want to check: ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		cout << "enter word"<<i+1<<" ";
		cin >> arr_input[i];
	}
}
// want to check if the char is e
void arr_hardcoded_a_to_z(char arr[26]) {
	arr[0] = 'a';
	arr[1] = 'b';
	arr[2] = 'c';
	arr[3] = 'd';
	arr[4] = 'e';
	arr[5] = 'f';
	arr[6] = 'g';
	arr[7] = 'h';
	arr[8] = 'i';
	arr[9] = 'j';
	arr[10] = 'k';
	arr[11] = 'l';
	arr[12] = 'm';
	arr[13] = 'n';
	arr[14] = 'o';
	arr[15] = 'p';
	arr[16] = 'q';
	arr[17] = 'r';
	arr[18] = 's';
	arr[19] = 't';
	arr[20] = 'u';
	arr[21] = 'v';
	arr[22] = 'w';
	arr[23] = 'x';
	arr[24] = 'y';
	arr[25] = 'z';

}

void count_of_ordered(string arr_input[100] ,char arr[26] , int arr_res[100] , int length ,int &length2) {
	int count = 0;
 length2 = 0;
	for (int c = 0; c < length; c++) {
		// fisrt string as example 

		for (int f = 0; f < arr_input[c].length(); f++) {
			// walk through the first string as example 
			if ( tolower(arr_input[c][f] ) == arr[f]) count++;
		}

		arr_res[length2] = count;
		length2++; 
		count = 0;
	}
	
}

void print_result(int arr_res[100], int length2 , int length ) {
	cout << "the count of ordered letters in word ";
	cout << "[ ";
	for (int i = 0; i < length2; i++) {
		
		 cout<<  arr_res[i]<<" ";
		
	}
	cout << " ]" << endl;
}
int main() {
	
	string arr_input[100];
	int arr_res[100];
	int length = 0;	
	int length2 = 0; // to store the length of result array
	input(arr_input , length);
	char arr_hardcoded[26];
	arr_hardcoded_a_to_z(arr_hardcoded);
	count_of_ordered(arr_input, arr_hardcoded, arr_res ,length,length2);
	print_result(arr_res, length2 , length );
	

}