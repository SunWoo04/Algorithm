#include <bits/stdc++.h>
using namespace std;
int main(){
    string num; cin >> num;
    vector<int>v;
    for(int i=0;i<num.size();i++){
        v.push_back(num[i] - '0');
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
}