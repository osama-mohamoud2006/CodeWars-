#include <iostream>
using namespace std;
int enter_length() {
	cout << "\nenter the number of even numbers you want: ";
	int n;
	cin >> n;
	return n;
}
// always return the last number even the no isn't enough 

void fill_array(int arr[100], int& length) {
	cout << "enter the number of the numbers you wanna to input: ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		cout << "\nenter the number" << i + 1 << ": ";
		cin >> arr[i];
	}
}
void fill_even_nums(int number, int& length2, int arr_even[100]) {

	

	length2 ++;
	arr_even[length2 - 1]=number;
	

}

void count_even_and_ALways_include_last_value( int &count ,int arr[100] , int n , int length , int arr_even[100] , int &length2) {
	

	count = 0;
	// n =3
	for (int f = 0; f < length; f++) 
		if (abs(arr[f]) % 2 == 0) { 

				count++;

			fill_even_nums(arr[f], length2, arr_even); 

		}
	
}

void print_with_last(int n, int arr_even[100], int count) {
	int start = count - n;  
	for (int i = start; i < count; i++) {
		cout << arr_even[i] << " ";
	}
}


int main() {
	int arr[100], length = 0;
	fill_array( arr, length);
	int n = enter_length();
	int arr_even[100], length2 = 0;
	int count = 0;
	count_even_and_ALways_include_last_value(count , arr, n, length, arr_even, length2);
	print_with_last(n, arr_even  , count );
}