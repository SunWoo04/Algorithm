#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n; cin >> m >> n;
    vector<int> v(n+1,0);
    for(int i=2;i<=n;i++){
        v[i] = i;
    }
    for(int i=2;i*i<=n;i++){
        if(v[i] == 0)continue;
        for(int j=2*i;j<=n;j+=i){
            if(v[j] == 0)continue;
            else v[j] = 0;
        }
    }
    for(int i=m;i<=n;i++){
        if(v[i] != 0) cout << v[i] << '\n';
    }

}