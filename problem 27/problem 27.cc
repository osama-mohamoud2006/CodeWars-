#include<string>
#include <iostream>
using namespace std; 

string twospace(){
    string space = "  ";
    return space;

}
string vaporcode(const string &str) {
  
  string original ="";
  for(auto c: str ){
    if(c!=' ') original+=c;
  }
  //cout<<original<<endl;

  string vap ="";
  for(auto i: original ){
    
    vap+= toupper(i);
    vap+= twospace();
   
  }
  
  if(!vap.empty()) vap.erase(vap.length()-2);

  return vap;
}

int main(){
    
  cout<<  vaporcode("Let's go to the movies")<<endl; // "L  E  T  S  G  O  T  O  T  H  E  M  O  V  I  E  S"
}