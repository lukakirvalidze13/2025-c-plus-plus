#include <iostream>
#include <vector>
using namespace std;
int main(){

/*მდინარეზე ბორანით გადააქვთ სხვადასხვა ტვირთი. ბორანის ტვირთამწეობა უდრის M ტონას (M-ზე მეტი მასის მქონე ტვირთს ვერ უძლებს). 
მდინარესთან, მეორე ნაპირზე გადასატანად მოიტანეს N რაოდენობის სხვადასხვა ტვირთი, რომელთაგან თითოეულის მასა ცნობილია.
დაადგინეთ, მოხერხდება თუ არა ბორანის ერთი გადასვლით ყველა ტვირთის გადატანა მდინარის მეორე ნაპირზე.*/

/*შემავალი:
20 3
5 7 3

გამომავალი:
YES*/

/*შემავალი:
100 5
10 10 10 10 70

გამომავალი:
NO*/


    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[m];
    for(int i = 0; i<m; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for(int i : arr){
        sum+=i;
    }
    if(sum < n){
        cout << "YES";
    }else{
        cout << "NO";
    }
    







    /*
    int n,m;
    cin >> n >> m;
    int sum = n + m;
    
    int arr_size;
    cin >> arr_size;

    int arr[arr_size];
    int sum_arr = 0;
    for(int i = 0; i<arr_size; i++){
        cin >> arr[i];
        sum_arr+=arr[i];
    }
    cout << sum_arr;
    */

    







    return 0;
}
