#include <iostream>
using namespace std;
int main(){

    //Lowest number

    // int numbers [5] = {1,2,3,20,17}; // array storing different numbers


    // int length = sizeof(numbers) / sizeof(numbers[0]); // length of the array
    // int lowest_number = numbers[0];
    
    // for(int number : numbers){ // Loop through the elements of the numbers array to find the lowest number
    //     if(lowest_number > number){
    //         lowest_number = number;
    //     }
    // }
    // cout << "The lowest number is: " << lowest_number<<endl; //printing the lowest number




    //SECOND ANSWER

    int n;
    cin >> n;
    int arr[n];
    for ( int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int lowest = arr[0];
    for(int i : arr){
        if(lowest > i){
            lowest = i;
        }
    }
    cout << lowest;

    return 0;
}