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

  string test =" hello wwold ";
  cout<<"\nbefore eraSE:"<<test<<endl;
 
  test.erase(0,1); // pos,count 
    cout<<"after eraSE1:"<<test<<endl;
    test.erase(1,2);// remove chars start from h (will not remove) and remove 2 chars 
       cout<<"after eraSE1:"<<test<<endl;

        test.erase(1);// remove chars start from h(index:1) (will not remove) and remove all chars after the start  
         cout<<"after eraSE2:"<<test<<endl;
}