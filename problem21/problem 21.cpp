#include <string>
#include <iostream>
using namespace std;

/*
    dotest("()",                 true);
    dotest("((()))",             true);
    dotest("()()()",             true);
    dotest("(()())()",           true);
    dotest("()(())((()))(())()", true);
  }
*/

/*
  It(InvalidCases) {
    dotest(")(",     false);
    dotest("()()(",  false);
    dotest("((())",  false);
    dotest("())(()", false);
    dotest(")()",    false);
    dotest(")",      false);
  }
*/

bool validParentheses( string str) {
    bool res = false;
  for(int i=0; i<str.length(); i++){
  /// ( --> 40
  // )  ---> 41

    if(str[i] == char(40) ) res = true ;
  }

  return res;
}

int main(){
     
 cout<< validParentheses( "()" ) <<endl;
}