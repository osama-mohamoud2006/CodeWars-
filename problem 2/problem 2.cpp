#include <iostream>
#include <string>
using namespace std;


string enter_range() {
	string input;
	cout << "\nenter the range from to: ";
	getline(cin, input);
	return input;
}

char extract_start(string entered_range ) {
	return entered_range[0];
}

char extract_end(string entered_range) {

	return entered_range[2];
}

string print_the_range_from_start_to_end(char str1 , char str2 ) {
	cout << "\n";
	int start_of_range = 0;
	int end_of_range = 0;

		 start_of_range = int(str1);
		 end_of_range = int(str2);

		 string final_output = "";

		 for (int i = start_of_range; i <= end_of_range; i++) 
			final_output+=  char(i);
		
		 return final_output;
	
}

int main() {
	
	string range=  enter_range() ;
cout<<print_the_range_from_start_to_end(extract_start(range) , extract_end(range) )<<endl;

	
	


}
