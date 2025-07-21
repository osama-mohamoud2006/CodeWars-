#include <iostream>
using namespace std;
void input_array(int arr[100], int& length) {
	cout << "How many numbers you want: ";
	cin >> length;

	for (int i = 0; i < length; i++) {
		cout << "\nenter element " << i + 1 << ": ";
		cin >> arr[i];
	}
}


void fill_array_res(int number,int arr_res[100], int& l2) {
	l2++;

	arr_res[l2 - 1] = number ;
}

// count the repeat of each number
void count(int arr[100] , int length  , int arr_res[100] , int &l2 , int arr_removed[100] , int &l3) {
	int count = 0;
	// arr[ 64,64,11,11,11]

	for (int a = 0; a < length; a++) {
		//11
		int number = arr[a];
		for (int c = 0; c < length; c++) {
			// the repetaion of each number 
			if (number == arr[c]) count++;
		}

		// if the count isn't odd
		if (count % 2 == 0) fill_array_res(arr[a], arr_res, l2);
		if (count % 2 != 0) fill_array_res(arr[a], arr_removed, l3);
		//rest count
		count = 0;

	}


}

void output_result(int arr[100] , int length ) {
	cout << "[";
	for (int o = 0; o < length; o++)
		cout << arr[o] << " ";
	cout << "]";
}

int main()
{
	int arr_res[100],  arr[100] , arr_removed[100];
	int length = 0;
	int length2 = 0;
	int length3 = 0;

	input_array(arr, length);
	count(arr, length, arr_res, length2, arr_removed , length3);

	cout << "\nthe elements that repeated odd times: ";
	output_result(arr_removed, length3);
	cout << "\nthe rest of elements that dosn't repeat odd times: ";
	output_result(arr_res, length2); // for the rest after removed
	cout << "\n";
	
}