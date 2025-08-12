#include <iostream>
using namespace std;

int divisors(long long n) {
    int count = 0 ;
   int i =1;
while(i<=n){ //4 >= 
 //if(i<=n) break ;
  if(n%i ==0) count++;
  i++; 
  
}
    return count;
}
int main(){
    cout<< divisors(4096)<<"\n";
}