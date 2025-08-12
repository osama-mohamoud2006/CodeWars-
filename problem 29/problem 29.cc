#include <vector>
#include <string>
#include <iostream>
#include <cctype>
using namespace std;
vector<unsigned int> removeSmallest( vector<unsigned int>& numbers) {
 
  vector<unsigned int> number = numbers ; 
  int min = number[0];

  for(int i=0; i<number.size(); i++){
    if(min > number[i]) min =  number[i];

  }
  int c =0 ; 
vector<unsigned int> res ; 
for(int i=0; i<number.size(); i++){
  
  if(number[i]==min && c<1)
  { 
    c++;
    continue;
    }
                     
                    
 else  res.push_back(number[i]);

  
}
  
  
  return res;
}

int main(){
    vector<unsigned int> numbers{1,2,4,2,4,1,2,3};
   for(auto v :removeSmallest( numbers )){
            cout<<v<<" ";
   }
}