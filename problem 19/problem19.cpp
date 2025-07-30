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
int height(int ,float ratio=0.0);

int main(){

    int width = enter_postive_number("enter the width: "); // 1024
    float Ratio = convert_ratio_to_float(  enter_ratio() ) ;
    int Height = height(width , Ratio); // 768
    cout<<"so the screen aspects is: "<< width<<":"<<Height<<endl;

}

string enter_ratio(){
    cout<<"enter ratio: ";
    string ratio;
    getline(cin,ratio);
    return ratio;
}

float convert_ratio_to_float(string ratio ){
       /// "4:3"--> 4.3
       // "16:9" --> 16.9
       
       if(ratio[1]==':'){
       int n1 = ratio[0]-'0'; //4
         int n2 = ratio[2] -'0';
         return n1/n2 ;
       }
       else if(ratio[2]==':'){
        int n1 = ratio[0]-'0'; //16
         int n2 = ratio[3] -'0'; //9 
         return n1/n2 ;
       }
     
}

int height(int width ,float ratio){
   return width/ratio;
}