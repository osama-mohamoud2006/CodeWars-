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
// int ex(){

// vector <int> x {1,3,4,5,56};
// return x ;  
// }