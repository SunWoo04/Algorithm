#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    unordered_map<int,int>m;
    vector<int>v;
    for(int i=0;i<num;i++){
        int temp; cin >> temp;
        m[temp] = 1;
    }
    cin >> num;
    for(int i=0;i<num;i++){
        int temp; cin >> temp;
        v.push_back(m[temp]);
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
}