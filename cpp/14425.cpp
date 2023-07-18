#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>stm;
    int n,m; cin >> n >> m;
    for(int i=0;i<n;i++){
        string temp; cin >> temp;
        stm[temp] = 1;
    }
    int cnt = 0;
    for(int i=0;i<m;i++){
        string temp; cin >> temp;
        if(stm.count(temp) == 1)cnt++;
    }
    cout << cnt;
}