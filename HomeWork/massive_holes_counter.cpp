#include <iostream>
#include <vector>
using namespace std;
int main(){

/*დაწერეთ პროგრამა, რომელიც უზრუნველყოფს შემდეგი დავალების გადაწყვეტას: მასივის ელემენტს ეწოდება ორმო, თუკი ის მკაცრად ნაკლებია მის ორივე მეზობელზე.
მაგ: 15 7 12 მასივში ერთი ორმოა - 7.
დათვალეთ მასივის ორმოების რაოდენობა. თუ ასეთი ელემენტები არ არსებობს, გამოიტანეთ -1.*/

/*შემავალი:
10
3 4 8 2 9 6 3 8 2 11

გამომავალი:
3*/


    //ANSWER
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;  
    for(int i = 1; i < n - 1; i++){
        //cout << arr[i] << " ";
        if(arr[i] < arr[i-1] && arr[i] < arr[i+1]){
            count++;
        }
        
    }
    cout << count;














    return 0;

}
