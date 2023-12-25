#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, M, ans = 0; cin >> N >> M;
    while(N--){
        string temp; cin >> temp;
        int cnt = 0;
        for(int i=0;i<temp.size();i++){
            if(temp[i] == 'O'){
                cnt++;
            }
        }
        if(cnt > M/2) ans++;
    }
    cout << ans;
}
