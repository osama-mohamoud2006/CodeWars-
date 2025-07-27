#include"E:\projects\my library\AllStuff.h"   
#include <iostream>
using namespace std;
using namespace AllStuff;

string remove_double(string input) {
	// doubles('a bb ccc dddd a') = 'aca'
	 //  double is even numbers , we will remove it
	string result = "";
	for (int s = 0; s < input.length(); s++) {
		int count = 0; 
		// take the first letter  a
		for (int l = 0; l < input.length(); l++) { //1+1
		
			 (input[s] == input[l])? count++ :count+=0;
			 
		}
		if (result.find(input[s]) == string::npos)

	(is_odd(count) == true) ? result += input[s] : result;
	}
	return result; 
}

int main() {
	string input = read_string("enter the string: ");
	cout<<"\n"<<remove_double(input) << endl;
}