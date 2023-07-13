#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    vector<string>v;
    for(int i=0;i<num;i++){
        string temp; cin >> temp;
        v.push_back(temp);
    }
    char c;
    for(int i=0;i<v[0].length();i++){
        c = v[0][i];
        for(int j=0;j<num;j++){
            if(c != v[j][i]){
                c = '?';
                break;
            }
        }
        cout << c;
    }
}