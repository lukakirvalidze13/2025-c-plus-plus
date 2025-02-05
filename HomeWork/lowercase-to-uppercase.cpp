#include <iostream>
int main(){

    char input;
    std::cout << "Enter a character \n";
    std::cin >> input;
    if(input >= 'a' && input <= 'z'){
        input = input -32;
    }else if(input >= 'A' and input <= 'Z'){
         input = input + 32; 
    }
    std::cout << input;






    return 0;
}