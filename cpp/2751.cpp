#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    int num; cin >> num;
    vector<int>v;
    for(int i=0;i<num;i++){
        cin >> temp;
        v.push_back(temp);
        //cin >> arr[i];
    }
    sort(v.begin(),v.end());
    for(int i =0 ;i<num;i++){
        cout << v[i] << '\n';
    }
}