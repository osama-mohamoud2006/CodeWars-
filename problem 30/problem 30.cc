#include<iostream>
using namespace std;

bool XO(const string& str)
{
  bool res = false;
  int x=0;
  int o=0;
  
  for(auto c: str ){
    if(tolower(c) =='x') x++;
    if(tolower(c) =='o') o++;
  }
  if(x==o)return true;
  if(x!=o) return false;
  
  
}

int main(){
    XO("ooxx");
}

