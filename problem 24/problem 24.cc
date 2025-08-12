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
 
    output( digitize(1234));
}

void output(vector <int> print){
    for(int &i : print)
    cout<<i<<" ";
    
    
}