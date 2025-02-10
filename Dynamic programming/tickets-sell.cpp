#include <iostream>
#include <vector>
using namespace std;
int main(){


    int n;
    cin>> n;
    
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    

    for(int i = 0; i<n; i++){
        cin  >> a[i] >> b[i] >> c[i];
    }
    vector<int> min_time(n+1);

    min_time[0] = 0;
    if(n>=1) min_time[1] = a[0];
    if(n>=2) min_time[2] = min(min_time[1] + a[1], b[0]);

    for (int i = 3; i <= n; i++) {
        min_time[i] = min(min_time[i - 1] + a[i - 1],
                         min(min_time[i - 2] + b[i - 2],
                             min_time[i - 3] + c[i - 3]));
    }
    cout << min_time[n];

















    return 0;
}