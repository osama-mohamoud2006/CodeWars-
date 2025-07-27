#include<iostream>
#include"E:\projects\my library\AllStuff.h"  
using namespace AllStuff;
using namespace std;
const int size = 5; 
int  save(int arr[::size], int number ) {
	int sum = 0;
	int count = 0; 
	for (int i = 0; i < ::size; i++) {
		sum += arr[i]; // 4
		if (sum > number) break;
		count++;
	}
	return count; 
}

int main() {
	int arr[::size];
	array_input(arr, ::size);
	cout << "\n";
	int n = enter_number("enter HD free size: ");
	cout << '\n';
	cout<<"the number of files you can save is: "<<save(arr, n)<<endl;




}