#include <bits/stdc++.h>
using namespace std;

map<string,string>m;

int main(){
    int t; cin >> t;
    while(t--){
        string name, inout; cin >> name >> inout;
        m[name] = inout;
    }

    vector<string>v;
    for(pair<string,string> i : m){
        if(i.second == "enter") v.push_back(i.first);
    }

    sort(v.begin(),v.end());

    for(int i=v.size()-1;i>=0;i--){
        cout << v[i] << '\n';
    }

}