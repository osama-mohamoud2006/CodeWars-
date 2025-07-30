#include <iostream>
#include<string>
#include"E:\projects\my library\AllStuff.h"  
using namespace std;
using namespace AllStuff;

// convert odd letters to uppercase

string upper_the_odd(string upper_word) {
	string res = "";
	int fakel = 1;
	for (int f = 0; f < upper_word.length(); f++) {
		// 1-1 
		
		if (is_odd(fakel) == false) res += upper_word[f];
		if (is_odd(fakel) == true) res += toupper(upper_word[f]);
		
		fakel++;
	}
	return res ;
}
string upper_the_even(string upper_word) {
	string res2 = "";
	int fakel2 = 1;
	for (int f = 0; f < upper_word.length(); f++) {

		if (is_even(fakel2) == false) res2 += upper_word[f];
		if (is_even(fakel2) == true)  res2 += toupper(upper_word[f]);
		fakel2++;
	}
	return res2;
}

int main() {
	cout<<upper_the_odd("codewars")<<endl;
	cout << "\n" << upper_the_even("codewars")<<endl;
}
