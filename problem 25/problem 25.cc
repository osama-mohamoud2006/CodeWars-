
#include <vector>
#include <string>
#include <iostream>
 #include <cstdlib>
using namespace std;
long long reverseNumber(long long n) {
vector<int> res ; //vector to store n 

  string num = to_string(n); // n is string

  for(int i=num.length()-1; i>=0; i--){ //push string as number to vector
    res.push_back(num[i]-'0'); //push num as int rev
  }


  string fres="";// to store result will convert to long long later
  for(int i =0; i<res.size(); i++){ //convert v to string 
    fres+=char(res[i]+'0');//convert char to correct number
  }

  if(n>0)return stoll(fres);
   else return stoll(fres)*-1 ;
}
int main(){
  cout<<reverseNumber(2134122354) ;
}