#include <iostream>
#include <vector>
using namespace std;
int main(){

//Average number calculator;

int numbers[5] = {17,20,170,171,172};
float avg, sum = 0;
int length;
length = sizeof(numbers) / sizeof(numbers[0]);
for(int number : numbers){
    sum = sum + number;
}

avg = sum / length;

cout << "Average number is: " << avg << endl;




}
