#include "E:\\projects\\my library\\AllStuff.h"   
#include <iostream>
using namespace std;
using namespace AllStuff;

///  a bb ccc dddd a

string remove_double(string input) {
	string result = "";
	for (char current_char : input)
		(result.empty() || result.back() != current_char) ? result.push_back(current_char) : result.pop_back();
	return result;
}


int main() {
	string input = read_string("enter the string: ");
	cout << "\n" << remove_double(input) << endl;
}
