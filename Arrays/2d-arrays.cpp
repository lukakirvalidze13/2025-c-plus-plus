#include <iostream>
using namespace std;
int main(){

    string cars[][2] = {{"X5", "X6"},
                       {"AMG", "CLS"},
                       {"Porsche", "Cayonne"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int column = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<column; j++){
            cout << cars[i][j] << endl;
        }
    }












    return 0;
}