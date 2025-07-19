#include <iostream>
using namespace std;
int input_climb() {
	cout << "enter climb number: ";
	int n;
	cin >> n;
	return n; 
}

void fill_array(int climb , int arr[4]) {
	
	int start = climb; //1
	int i = 0; //3
	while (start>=1) {
	
		arr[i] = start; // 1
		start = start / 2; // 1
		i++;
	}
}
void output(int arr[4]) {
	cout << "\n[";
	for (int o = 4 - 1; o >= 0; o--)
		cout << arr[o] << " ";
	cout << "]";
	cout << "\n";
}

int main() {
	int climb = input_climb();
	int arr[4];
	fill_array(climb, arr);
	output(arr);
}