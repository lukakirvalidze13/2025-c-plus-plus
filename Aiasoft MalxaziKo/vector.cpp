#include <iostream>
#include <vector>
using namespace std;
int main(){

     int n;
     cin >> n;
     vector <int> a;
     for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
     }

     auto w = 2;  cout << w << endl;
     w = 2.5;     cout << w << endl;
     w = '&';     cout << (char)w << endl;
     //w = "qwert"; cout << w << endl;

     int ans = 0;
     for(int v:a) ans += v;

     cout << ans;
     






    return 0;
}