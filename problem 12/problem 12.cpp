#include <iostream>
using namespace std;

string input_period() {
	string p;
	cout << "enter am or pm: ";
	cin >> p;
	return p;
}

int input_time_h() {
	cout << "\nenter H: ";
	int h;
	cin >> h;
	return h;
}

int input_time_m() {
	cout << "\nenter M: ";
	int m;
	cin >> m;
	return m;
}

void system24(int h , int m , string p ) {
	// 1,2,3,4,5,6,7,8,9,10,11, at am is normal 
     

	if (p == "pm") {
		// 12 if pm then it is 12 normally but in am it is 0
		if (h != 12) h += 12;
			
		
		
	}
	else if(p=="am") {

		if (h == 12) {
			h = 0;
			
		}
		
	}

	if (h < 10) cout << "0";
	cout << h << ":";

	if (m < 10) cout << "0";
	cout << m << endl;

}

int main() {
	string p = input_period();
	int h = input_time_h();
	int m = input_time_m();
	system24(h, m, p);

}