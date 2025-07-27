#include"E:\projects\my library\AllStuff.h"   
#include <iostream>
using namespace std;
using namespace AllStuff;

void remove_double(string input) {
	// doubles('a bb ccc dddd a') = 'aca'
	 //  double is even numbers , we will remove it
	string result = "";
	for (int s = 0; s < input.length(); s++) {
		int count = 0; 
		// take the first letter  a
		for (char l :  input) {
			 (input[s] == input[l])? count++ : count+=0;
		}
		(is_even(count) == true) ? result += input[s] : ;
	}

}

int main() {
	string input = read_string("enter the string: ");
}