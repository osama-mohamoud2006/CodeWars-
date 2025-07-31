// if A (- B --> return true
#include <iostream>
#include <string>
using namespace std;



bool is_string_belongingto(string a, string b) {

  

    // abc  --- > bc 
    bool v = false;
    for (int i = 0; i < b.length(); i++) {
        ///c d e
        //c 
        v = false;
        for (int i2 = 0; i2 < a.length(); i2++) {
            // a b c d e 
            if (tolower(b[i]) == tolower(a[i2])) {
                v = true; 
                break;
               
            }
         

        }
        if (v != true) return false;
     
    }

    if (v == true) return true;
}


int main() {
    cout << is_string_belongingto("sumo", "omo") << endl;
}