#include <iostream>
#include <vector>
using namespace std;
int main(){


    // int n;
    // cin>> n;
    
    // vector<int> a(n);
    // vector<int> b(n);
    // vector<int> c(n);
    

    // for(int i = 0; i<n; i++){
    //     cin  >> a[i] >> b[i] >> c[i];
    // }
    // vector<int> min_time(n+1);

    // min_time[0] = 0;
    // if(n>=1) min_time[1] = a[0];
    // if(n>=2) min_time[2] = min(min_time[1] + a[1], b[0]);

    // for (int i = 3; i <= n; i++) {
    //     min_time[i] = min(min_time[i - 1] + a[i - 1],
    //                      min(min_time[i - 2] + b[i - 2],
    //                          min_time[i - 3] + c[i - 3]));
    // }
    // cout << min_time[n];

    int n;
    cin>>n;
    int a[n+1],b[n+1], c[n+1];

    for(int i =1; i<=n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    int d[n+1];

    d[1] = a[1];
    d[2] = min(a[1] + a[2], b[1]);
    d[3] = min(a[1] + a[2] + a[3], b[1] + a[3], c[1] + b[2]);

    for(int k = 4; k<=n; k++){
        d[k] = min(d[k - 1] + a[k], d[k - 2] + b[k - 1], d[k - 3] + c[k - 2]);
    }
    cout << d[n];















    return 0;
}