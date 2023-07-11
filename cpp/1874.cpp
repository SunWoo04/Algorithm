#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    vector<char>v;
    int num; cin >> num;
    int cnt = 1;
    for(int i=0;i<num;i++){
        int temp; cin >> temp;
        while(cnt <= temp){
            v.push_back('+');
            s.push(cnt);
            cnt++;
        }
        if(temp == s.top()){
            v.push_back('-');
            s.pop();
        }
    }
    if(s.empty()){
        for(int i=0;i<v.size();i++){
            cout << v[i] << '\n';
        }
    }else{
        cout << "NO";
    }
}