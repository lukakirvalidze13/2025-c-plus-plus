#include <iostream>
#include <string>
using namespace std;
int main(){

    string input;
    cin >> input;
    string reversedString = "";
    for(int i = input.length() - 1; i >= 0; --i){
        reversedString += input[i];
    }
    cout << reversedString;


    return 0;
}