#include <bits/stdc++.h>

using namespace std;

int G[21][21], used[21]; //   * * * * * * * * * * * * * * * * * * * * * * * * 
int n, m, v,cnt=0;

void DFS(int x){ // romel wveroshic vushvebT

     used[x]=1;
     cnt++;
     //G grafis x striqonshi x-is kavSirebia
     for (int k=1; k<=n; ++k){
        if (G[x][k]==1)
            if (used[k]==0)
                   DFS(k); //k-shi klonis gashveba;
     }
}

int main() {
    cin>>n>>m>>v;
    // grafis momzadeba
    for (int i=1; i<=m; ++i){
        int p,q; cin>>p>>q;
        G[p][q] = G[q][p] = 1;
    }
    
    
    for (int i=1; i<=n; ++i)
        if (used[i]==0)  DFS(i);
    
    cout<<cnt<<endl;
    for (int i=1; i<=n; ++i) cout<<used[i]<<' ';

    return 0;
}