#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int matrix[n][n];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> matrix[i][j];
        }
    }
    int main_sum = 0;
    for(int i = 0; i<n; i++){
        main_sum += matrix[i][i];
    }

    int sec_sum = 0;
    for(int i = 0; i<n; i++){
        sec_sum += matrix[i][n-1-i];
    }

    int total_sum = main_sum + sec_sum;
    if(n%2 != 0){
        total_sum -= matrix[n / 2][n / 2];
    }
    cout<< total_sum;






    return 0;
}