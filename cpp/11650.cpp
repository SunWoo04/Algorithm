#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>>v;
    int num; cin >> num;
    for(int i=0;i<num;i++){
        int a,b; cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end());
    for(auto &i : v){
        cout << i.first << ' ' << i.second << '\n';
    }
}




// [최재경] [오전 10:14] 1. 페어 사용하기
// vector<pair<int,int>> v;
// int a, b; cin >> a >> b;
// v.push_back({a, b});

// bool cmp(pair<int, int> &p1, pair<int, int> &p2){
//    if(p1.first == p2.first)
//       return p1.second < p2.second;
//    return p1.first < p2.first;
// }

// sort(v.begin(), v.end(), cmp);