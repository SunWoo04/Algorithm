#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    vector<int>v(num);
    for(int i=0;i<num;i++){
        cin >> v[i];
    }
    vector<int>cv(v);
    sort(cv.begin(),cv.end());
    cv.erase(unique(cv.begin(),cv.end()),cv.end());
    map<int,int>m;
    for(int i=0;i<cv.size();i++){
        m[cv[i]] = i;
    }
    for(int i=0;i<num;i++){
        cout << m[v[i]] << ' ';
    }
}