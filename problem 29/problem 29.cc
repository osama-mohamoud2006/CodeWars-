#include <vector>
#include <string>
#include <iostream>
#include <cctype>
using namespace std;
vector<unsigned int> removeSmallest( vector<unsigned int>& numbers) {
 
  vector<unsigned int> number = numbers ; //transfer the parameter elements to another vector 
  int min = number[0];

  //get the min value in the vector 
  for(int i=0; i<number.size(); i++){
    if(min > number[i]) min =  number[i];

  }
 
  int c =0 ; 
  // transfer the proper results only to another vector  
vector<unsigned int> res ; //for storing proper results 
for(int i=0; i<number.size(); i++){
  //WE NEED TO IGNORE THE FIRST OCCUERENCE OF THE i == min
  if(number[i]==min && c<1)//if the min repeated 2times it will ignore min (wonot be pushed)
  { 
    c++;
    continue;
    }
                                      
 else  res.push_back(number[i]);//push normally if there 

}
  
  return res;
}

int main(){
    vector<unsigned int> numbers{1,2,4,2,4,1,2,3};
   for(auto v :removeSmallest( numbers )){
            cout<<v<<" ";
   }

}