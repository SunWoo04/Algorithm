#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int num; cin >> num;
    unordered_map<int,bool>um;
    for(int i=0;i<num;i++){
        int temp; cin >> temp;
        um[temp] = true;
    }
    int find; cin >> find;
    for(int i=0;i<find;i++){
        int temp; cin >> temp;
        if (um.count(temp) == 1) { // if찾았다면
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
}