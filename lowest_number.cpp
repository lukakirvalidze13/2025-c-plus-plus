#include <iostream>
using namespace std;
int main(){

    int numbers [5] = {1,2,3,20,17};
    int i;

    int length = sizeof(numbers) / sizeof(numbers[0]); // length of the array
    int lowest_number = numbers[0];
    
    for(int number : numbers){
        if(lowest_number > number){
            lowest_number = number;
        }
    }
    cout << "The lowest number is: " << lowest_number<<endl;


    return 0;
}