//1 PARAMETERS ARGUMENTS

// #include <iostream>
// using namespace std;
// void myFunction(string fname){
//     cout << fname << " Kirvalidze\n";
// }
// int main(){
//     myFunction("Anna");
//     myFunction("Anna");
//     myFunction("Anna");

//     return 0;
// }

//2 DEFAULT PARAMETER

// #include <iostream>
// using namespace std;
// void myFunction(string country = "Georgia"){
//     cout << country << "\n";
// }
// int main(){
//     myFunction("Anna");
//     myFunction("Anna");
//     myFunction("Anna");
//     myFunction(); DEFAULT ARGUMENT (FROM A PARAMETER)

//     return 0;
// }


//3 MULTIPLE PARAMETERS

// #include <iostream>
// using namespace std;
// void myFunction(string fname, int age){
//     cout << fname << " Kvicaridze " << age << " years old \n";
// }
// int main(){
//     myFunction("Anna", 169);
//     myFunction("Anna", 169);
//     myFunction("Anna", 169);

//     return 0;
// }


//4 RETURN VALUES

// #include <iostream>
// using namespace std;
// int myFunction(int x){
//     return 5 + x;
// }
// int main(){
//     cout << myFunction(3);

//     return 0;
// }

//4 RETURN VALUES

// #include <iostream>
// using namespace std;
// int myFunction(int x, int y){
//     return x + y;
// }
// int main(){
//     int z = myFunction(4,3);
//     cout << z;
//     return 0;
// }


//5 PASS BY REFERENCE

#include <iostream>
using namespace std;
void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int firstNum = 10;
    int secondNum = 20;
    cout << "Before swap : " << endl;
    cout << firstNum << secondNum << endl;
    swapNums(firstNum, secondNum);
    cout << "After swap : " << endl;
    cout << firstNum << secondNum << endl;

    return 0;
}