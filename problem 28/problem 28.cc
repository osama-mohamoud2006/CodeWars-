#include <iostream>
using namespace std; 
int sequenceSum(int start, int end, int step)
{
  if(start>end) return 0 ; 
  int res =0 ;
for(int i= start; i<=end; i+=step){
  res+=i;
}
  return res;
}

int main(){
    cout<<sequenceSum(6, 6, 2);
}