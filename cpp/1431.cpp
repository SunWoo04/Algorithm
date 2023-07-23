#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }

    int a_bout = 0,b_bout = 0;
    if(a.length() == b.length()){
        for(int i=0;i<a.length();i++){
            if(a[i] >= '0' && a[i] <= '9')a_bout += a[i] - '0';
            if(b[i] >= '0' && b[i] <= '9')b_bout += b[i] - '0';
        }
    }
    if(a_bout != b_bout)return a_bout < b_bout;
    
    return a < b;
}

int main(){
    int num; cin >> num;
    vector<string>v;
    for(int i=0;i<num;i++){
        string temp; cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        cout << v[i] << '\n';
    }
}