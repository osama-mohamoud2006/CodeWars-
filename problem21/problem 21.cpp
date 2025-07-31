#include <string>
#include <iostream>
using namespace std;

bool validParentheses( string str) {

 int ok =0 ;
    

  for( char c: str){
  (c=='(') ? ok++ : ok--;
 if(ok<0)  return false;  
    
  }

  return !ok ;
}


int main(){
     
 cout<< validParentheses( ")(") <<endl;
}