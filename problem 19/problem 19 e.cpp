// the equation is : height = width / ratio 
// ratio is string so i should at first convert it to correct float number
// input width , ratio

#include <iostream>
#include <string>
#include"E:\projects\my library\AllStuff.h"  
using namespace AllStuff;
using namespace std;


float convert_ratio_to_float(string ratio = "");

int height(int, float ratio = 0.0);

int main() {

    int width = enter_postive_number("enter the width: "); // 1024
    
    string entered_ratio = read_full_line("enter ratio: ");
    float Ratio = convert_ratio_to_float(entered_ratio);
    int Height = height(width, Ratio); // 768
    cout << "so the screen aspects is: " << width << ":" << Height << endl;

}



float convert_ratio_to_float(string ratio) {
    /// "4:3"--> 4.3
    // "16:9" --> 16.9
    
        if (ratio[1] == ':') {
            float n1 = ratio[0] - '0'; //4
            float n2 = ratio[2] - '0';
            float res = n1 / n2;
            return res;
        }

        if (ratio[2] == ':' ) {
            string n1 = "";
            for (int p = 0; p < ratio.length(); p++) {
                if (ratio[p] == ':') break;
                else  n1 += ratio[p];

            }

            float n2 = ratio[3] - '0'; //9 
            return  float(stof(n1) / n2);
        }
    
}

int height(int width, float ratio) {
    return width / (float)ratio;
}