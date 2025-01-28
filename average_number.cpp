#include <iostream>
#include <vector>
using namespace std;
int main(){

//Average number calculator;

int numbers[5] = {17,20,170,171,172};
float avg, sum = 0;
int length;
length = sizeof(numbers) / sizeof(numbers[0]);
// for(int number : numbers){
//     sum = sum + number;
// }

for(int i = 0; i <= 4; i++){
    sum = sum + numbers[i];
}


avg = sum / length;
cout << sum << endl;
cout << length << endl;
cout << "Average number is: " << avg << endl;




}
