#include <iostream>
using namespace std;
void input_floor(int arr[3]) {
	for(int i = 0; i < 3; i++) {
		cout << "Enter floor " << i + 1 << ": ";
		cin >> arr[i];
	}
}
int output_floor(int arr[3]) {
	int res = 0;

	for (int j = 0; j <2; j++) {
		res += abs(arr[j] - arr[j + 1]);
	}
	return res;
}

int main() {
	int arr[3];
	input_floor(arr);
	cout << "the ans is " << output_floor(arr)<<endl;
}