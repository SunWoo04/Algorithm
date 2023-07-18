#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,bool>m;
    vector<string>v;
    int d,b; cin >> d >> b;
    for(int i=0;i<d;i++){
        string temp; cin >> temp;
        m[temp] = true;
    }
    int cnt = 0;
    for(int i=0;i<b;i++){
        string temp; cin >> temp;
        if(m[temp] == true){
            cnt++;
            v.push_back(temp);
        }
    }
    sort(v.begin(),v.end());
    cout << cnt << '\n';
    for(int i=0;i<v.size();i++){
        cout << v[i] << '\n';
    }
}