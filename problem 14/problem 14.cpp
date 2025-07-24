#include <iostream>
#include <string>
using namespace std;

string input() {
	string word;
	cout << "enter the word you wanna: ";
	cin >> word;
	return word;
}

string string_swap(int a, int b, string str) {
	// str = "codewars", a = 1, b = 5 --> "cawedors"
	//solve("FunctionalProgramming", 2,15),Equals("FuargorPlanoitcnmming"));
	cout << "\n";
	
	string result = "";
	for (int i = 0; i < str.length(); i++) {
		
		// if i == the start index
		if (i == a ) {

			if (b >= str.length()) b = str.length() - 1; // to ensure that the b isn't 
			//bigger than actual length 

			for (int s = b; s >= a; s--) {
				// add char inversely from the end index to start index 
				// b is End
				// a is Start ( both of them according to codewars problem)
				result += str[s];
				
			}
			i = b; // after finishing make i = the end to ensure add the rest of chars correctly
			// to the resukt and avoiding unneccessary repetion of chars 
		}
		
		else
		result += str[i];
		
	}
	return result; 
}
int main() {
	cout<<string_swap(1,5,input())<<endl;
}