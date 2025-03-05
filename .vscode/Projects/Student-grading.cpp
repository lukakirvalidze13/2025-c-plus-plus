#include <iostream>
using namespace std;
struct Student{
    string name;
    int age;
    string email;
    float grades[5];
};

float calculateAverage(Student student){
    float sum = 0;
    for(int i = 0; i<5; i++){
        sum += student.grades[i];
    }
    return sum / 5;
}

int main(){
    Student student;

    cout << "Enter your name" << endl;
    getline(cin, student.name);

    cout << "Enter your age" << endl;
    cin >> student.age;

    cin.ignore();

    cout << "Enter your email" << endl;
    getline(cin, student.email);

    cout << "Enter grades for 5 subjects"<<endl;
    for(int i = 0; i<5; i++){
        cin >> student.grades[i];
    }

    float average = calculateAverage(student);
    string result = (average >= 50) ? "Passed" : "Failed";

    cout << "--Your details --" << endl;
    cout <<"Name - " << student.name << endl;
    cout <<"Age - " << student.age << endl;
    cout <<"Email - " << student.email << endl;
    
    cout << "Grades: ";
    for(int i =0; i<5; i++){
        cout << student.grades[i] << " ";
    }
    cout << endl;
    
    cout << "Average grade: " << average << endl;
    cout << "Result: " << result << endl;


    return 0;
}