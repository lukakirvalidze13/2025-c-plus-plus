#include <iostream>
using namespace std;
int main(){


//დაწერეთ პროგრამა რომელიც გამოთვლის მოცემული რიცხვის ციფრთა ჯამს.
/*შემავალი:
23
გამომავალი:
5

შემავალი:
123
გამომავალი:
6
*/

    int n;
    cin >> n;
    int sum = 0;
    while(n != 0){
        sum = sum + n % 10;
        n = n / 10;

    }
    cout << sum;
















    return 0;
}