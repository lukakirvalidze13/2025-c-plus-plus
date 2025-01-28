#include <iostream>
#include <vector>
using namespace std;
int main(){

    // int model[4];
    // model[0] = 3;
    // model[1] = 4;
    // model[2] = 8;
    // model[3] = 9;
    // for(int i = 0; i <= 3; i++){
    //     cout << model[i] << endl;
    // }


    // string name[4] = {"BMW", "RANGE ROVER", "TOYOTA", "PORSCHE"};
    // for(int i = 3; i >= 0; i--){
    //     cout << name[i]<< endl;
    // }


    // string my_love[2] = {"ME", "HER"};
    // for(int i = 0; i < 2; i++){
    //     cout << my_love[i] << endl;
    // }
    

    // string love[4] = {"ME", "ME", "HER", "HER"};
    // for(string i:love){
    //     cout << i << endl;
    // }

    // string love[2] = {"LUKA", "ANNA"};
    // for(string x : love){
    //     cout << x << endl;
    // }


    // string car[] = {"BMW"};
    // for(int i = 0; i<1; i++){
    //     cout << car[i];
    // }

    // vector<string> cars= {"BMW", "RANGE ROVER"};
    // cars.push_back("Tesla");
    // for(int i = 0; i <3; i++){
    //     cout << cars[i] << endl;
    // }


    // Get the Size of an Array
    // To get the size of an array, you can use the sizeof() operator:

    //4 * 5 = 20 bytes;

    // int cars[5] = {3,4,5,6,7}; 
    // cout << sizeof(cars);


    // int cars[3] = {4,5,6};
    // int size = sizeof(cars);
    // cout << size;
    
    // int cars[3] = {3,4,5};
    // for (int i = 2; i < sizeof(cars) / sizeof(cars[0]); i-- ){
    //     cout << cars[i] << endl;
    // }



    // int cars[2] = {5,6};
    // for(int i : cars){
    //     cout << i << endl;
    // }


    // A real life example : To demonstrate a practical example of using arrays, let's create a program that calculates the average of different ages:

    // An array storing different ages
    int ages[5] = {17,169,170,171,20};
    float avg,sum = 0;
    int i;
    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);
    
    // Loop through the elements of the array
    for(int age : ages){
        sum += age;
    }

    avg = sum / length;
    cout << "THe average is: " << avg << endl;

    return 0;
}


