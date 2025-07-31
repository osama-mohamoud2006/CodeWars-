// if A (- B --> return true
#include <iostream>
#include <string>
using namespace std;



bool is_string_belongingto(string a, string b) {
    bool v = false; 
    int l = b.length();
    for (int i = l; l >= 0; l--) {
        v = false;
        /// 3,2 ,2 
        // bcd b-->c-->d
        if (tolower(a[i]) == tolower(b[i])) v = true;
    }
     return v;

}


int main() {
    cout << is_string_belongingto("samurai", "ai") << endl;
}