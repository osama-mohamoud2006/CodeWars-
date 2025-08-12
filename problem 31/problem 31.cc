#include <iostream>
#include <vector>
using namespace std;
/*
inAscOrder([1,2,4,7,19]); // returns true
inAscOrder([1,2,3,4,5]); // returns true
inAscOrder([1,6,10,18,2,4,20]); // returns false
*/
bool isAscOrder(vector<int> arr){
  for(int i =1; i<arr.size(); i++ ){
    if( !(arr[i-1]<arr[i]) )  return false ;
   
  }
  return true ; 
}


int main(){
    vector<int> num{1,6,10,18,2,4,20};
   cout<< isAscOrder(num)<<endl;
}