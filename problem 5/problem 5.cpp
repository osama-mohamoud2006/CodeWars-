#include <iostream>
using namespace std;
void input_array(int arr[13]) {
	for (int i = 0; i < 13; i++) {
		cout << "enter " << i + 1 << " ";
		cin >> arr[i];
	}
}
int calculate_repetion_for_each_element_And_return_max(int arr[13]) {
	int count = 0; 
	int res = 0;
	for (int w = 0; w < 13; w++) {
		// access all elements

		//take each element and calculate repetaion 
		// arr[0] as example
		for ( int r=0; r<13; r++ )
		{
			if (arr[w] == arr[r]) count++;
		}
		
		if (count > res)res = count;
		count = 0;



	}
	return res;
}


int main() {
	int arr[13];
	int pass_repetation[13];
	input_array(arr);
	cout<< "\nthe max count is: " << calculate_repetion_for_each_element_And_return_max(arr);
	

}