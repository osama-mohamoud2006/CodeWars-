#include <iostream>
#include <vector>
using namespace std;

vector <int> digitize(int n){
   vector<int> res ; 
   string num = to_string(n); // coverted number to string 
  for(int i =0; i<num.length(); i++){
    int number = num[i]-'0'; // coverted char number to int number
    res.push_back(number);
  }
  return res;

}
void output(vector <int>);
// int ex(){ // vector data type function will return vector elements you cann't use  int data type function to return vector elements 

//    vector<int> res ; 
//    string num = to_string(n); // coverted number to string 
//   for(int i =0; i<num.length(); i++){
//     int number = num[i]-'0'; // coverted char number to int number
//     res.push_back(number);
//   }
//   return res;
// }

int main(){
    // 2 methods to call vector function to use it for another thing
  vector <int> print ;  // first method make vector to store function result 
  print = digitize(1234); // yes the this way is true
  output(print); // second the vector as parameter to print its elements 
  cout<<"\n";
    output( digitize(1234)); // or send the function directly 
}

void output(vector <int> print){
    for(int &i : print)
    cout<<i<<" ";
    
    
}