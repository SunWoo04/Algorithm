#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int num,find;
    map<int,int>um;

    cin >> num;
    for(int i=0;i<num;i++){
        int temp; cin >> temp;
        um[temp]++;
    }

    cin >> find;
    for(int i=0;i<find;i++){
        int temp; cin >> temp;
        cout << um[temp] << ' ';
    }
}