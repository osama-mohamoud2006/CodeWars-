#include <iostream>
#include"E:\projects\my library\AllStuff.h"  
#include <cmath>
#include <string>
using namespace std;
using namespace AllStuff;
/*

"test" --> "es"
"testing" --> "t"
"middle" --> "dd"
"A" --> "A"
*/
string mid(string input) {
	string res = "";
	int length_for_output = (input.length() / 2);
	for (char c : input) {

		if (is_even(input.length())) {
			res.push_back(input[length_for_output - 1]);
			res.push_back(input[length_for_output]);
			return res;
		}
		
		else res.push_back(input[ceil(length_for_output)]);
			return res; 
		
	}

}

int main()
{
	string input = read_string("enter the word you want to get the middel: ");
	cout << mid(input)<< endl;
}