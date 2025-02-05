#include <iostream>
using namespace std;
int main() {

    // int n;
    // cin >> n;
    // char arr[n];
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // for(char i : arr){
    // while(i >= 'A' and i <= 'Z'){
    //     i = i + 32;
    //     cout << i << " ";
    // }
    // }

    int n;
    cin >> n;
    char arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for(char i : arr){
        while(i >= 'A' and i <= 'Z'){
            i = i + 32;
            cout << i << " ";
        }
    }



    return 0;
}