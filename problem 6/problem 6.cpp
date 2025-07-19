#include <iostream>
using namespace std;
void  input(int arr[3][5]) {
 for (int i = 0; i < 3; i++) {
        cout << "enter elemnts of row " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }
}

int sum(int arr[3][5]) {
    int total = 0; 
    for (int f = 0; f < 3; f++) {
     /*   if (f == 0)  total += arr[f][2];
        else if (f == 1) total += arr[f][1];
        else total += arr[f][0];*/
        int index = 3 - 1 - f;
        if (index  >= 0 && index < 5) total += arr[f][index];

    }
    return total ;
}

int main() {
    int arr[3][5];

    
    input(arr);


    cout << "total: " << sum(arr) << endl;

    return 0;
}
