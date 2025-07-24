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
		
		if (i == a ) {
			if (b >= str.length()) b = str.length() - 1;
			for (int s = b; s >= a; s--) {
				result += str[s];
				
			}
			i = b;
		}
		
		else
		result += str[i];
		
	}
	return result; 
}
int main() {
	cout<<string_swap(1,5,input())<<endl;
}