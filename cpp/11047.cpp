#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int cnt = 0;
    int coin,won; cin >> coin >> won;
    for(int i=0;i<coin;i++){
        int temp; cin >> temp;
        v.push_back(temp);
    }
    for(int i=v.size()-1;i>=0;i--){
        while(won-v[i] >= 0){
            cnt++;
            won -= v[i];
        }
    }
    cout << cnt;
}