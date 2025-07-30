// the equation is : height = width / ratio 
// ratio is string so i should at first convert it to correct float number

// input width , ratio
#include <iostream>
#include <string>
#include"E:\projects\my library\AllStuff.h"  
using namespace AllStuff; 
using namespace std;

string enter_ratio();
float convert_ratio_to_float(string ratio ="");

int main(){

    int width = enter_postive_number("enter the width: ");
    

}

string enter_ratio(){
    cout<<"enter ratio: ";
    string ratio;
    getline(cin,ratio);
    return ratio;
}

float convert_ratio_to_float(string ratio ){
       /// 4:3 --> 4.3
}