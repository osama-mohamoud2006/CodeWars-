#include <iostream>
using namespace std; 
//vowels are "a", "e", "i", "o", "u"


// function declration 
string remove_vowel(string str="" , int c=0);

int main(){
    cout<<"\n"<<remove_vowel("aeiou")<<"\n";
}

0                 ///// first method ../////////
//  string remove_vowel(string str){
//  string without = "";
//  for(char c : str){
//     if(c!='a' &&c!='e' &&c!='i'&&c!='o' && c!='u') without+=c;
//  }
//   return without ; 
 
//  }

//  Recursion  method 
  string remove_vowel(string str , int c){
  static string without = ""; // to store the res and not intilize each time 
   if(c== str.length()) return without; // base case
   else{

    if(str[c]!='a' && str[c]!='e' &&str[c]!='i'&&str[c]!='o' && str[c]!='u') without+=str[c];
 
            // c +1 to increment the index to access the next char 
     return remove_vowel( str ,  c+1) ;  // call function again recrusivly 
   }
   

 }