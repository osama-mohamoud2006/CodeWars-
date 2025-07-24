#include <iostream>
using namespace std;
string input_number() {
	string n="";
	cout << "enter number: ";
	cin >> n;

		return n;

}
void fill_array(int number, int &length2, int arr[100]) {
	length2++;
	arr[length2 - 1] = number;

}
void all_possible_sum(int arr[100], string number , int &l2)
{ 
	int num = 0;
	int num2 = 0;
	int sum = 0;
	for (int i = 0; i < number.length(); i++)
	{
		num = number[i] - '0';
		/// 3
		for (int j = i+1; j < number.length(); j++)
		{
			//1 + 2,3,4,5
			num2 = number[j] - '0';
			sum = num + num2; // 1+2 			fill_array(sum, l2, arr);

	   }


	}
}

void output(int arr[100] , int l2 ) {

	for (int o = 0; o < l2; o++)
		cout  << arr[o] << " ";
	
}

int main()
{
	int arr[100];
	int l2 = 0;

	string number = input_number();
	all_possible_sum(arr, number , l2);
	output(arr , l2);
	cout << endl;


}