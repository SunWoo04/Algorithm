#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    vector<int>v;
    string target;
    for(int i=666;i<=INT_MAX/4;i++){
        target = to_string(i);
        for(int j =0; j<target.length();j++){
            if(target[j] == '6' && target[j+1] == '6' && target[j+2] == '6'){
                v.push_back(i);
                break;
            }
        }
        if(v.size() == num){
            break;
        }
    }
    cout << v[num-1];
}