#include <iostream>
using namespace std;

void fill_array(int arr[6]) {

    for (int i = 0; i < 6; i++) {
        cout << "enter array element" << i << " ";
        cin >> arr[i];
    }
}

void number_that_isnot_repeated(int arr[6], int arr_res[6] , int &l) {
   // bool found_repeat = false;
    int index = 1;
    l = 0;
    int count = 0;

    for (int f = 0; f < 6; f++) {
        //arr[0]
        
        for (int g = 0; g < 6; g++) {
            if (arr[f] == arr[g]) count++;

          
        }
         if( (count==1 )) {
           
             arr_res[l] = arr[f];
             l++;
           }

      
		count = 0;


    }

}

void print_repeated(int arr_res[6] , int l) {
    for (int o = 0; o < l; o++) {

        cout << "\nthe numbers that doesnot repeated: " << arr_res[o] <<endl;
    }
}

void sum_of_nums(int arr_res[6] , int  l ) {
    int sum = 0;
    for (int r = 0; r < l; r++) {
        sum += arr_res[r];
    }
    cout << "\nthen the sum of 2 nums are: " << sum << endl;
}
int main() {
    int arr[6];
    int arr_res[6];
	int l = 0; // length of the result array
    fill_array(arr);
    number_that_isnot_repeated(arr, arr_res , l);
    print_repeated(arr_res , l );
    sum_of_nums(arr_res , l );
}