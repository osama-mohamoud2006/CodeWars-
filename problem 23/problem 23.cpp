// if A (- B --> return true
#include <iostream>
#include <string>
using namespace std;



bool is_string_belongingto(string a , string b ){
    // abc  --- > bc 
    bool v = false; 
    for(int i=0; i<b.length(); i++){
           ///c d e
           //d
           for(int i2=0; i2<a.length(); i2++) {
                 // a b c d e 
                 if(b[i] == a[i2] ){
                   return true;
                 }
                
           }

           

        }

        if(v == true) return true ; 
}


int main(){
 cout<<  is_string_belongingto("samurai" ,"ai" )<<endl;
}