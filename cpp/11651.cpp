#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2){
    if(p1.second == p2.second){
        return p1.first < p2.first;
    }
    return p1.second < p2.second;
}

int main(){
    int num; cin >> num;
    vector<pair<int,int>>v;
    for(int i=0;i<num;i++){
        int a,b; cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto &i : v){
        cout << i.first << ' ' << i.second << '\n';
    }

}