#include <iostream>
using namespace std;
int main(){

    int n,m;
    cin >> n >> m;
    int ways[n+1];
    ways[0] = 1;
    if(1 != m ){
        ways[1] = 1;
    }else{
        ways[1] = 0;
    }
    for(int i = 2; i <=n; i++){
        if(i == m){
            ways[i] = 0;
        }else{
            ways[i] = 0;
        if(i > 1){
            ways[i] = ways[i] + ways[i-2];
        }if(i > 0){
            ways[i] = ways[i] + ways[i-1];
            }
        }
    }


    cout << ways[n];
















    return 0;
}