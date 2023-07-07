#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    for(int i=0;i<num;i++){
        stack<char>s;
        string temp; cin >> temp;
        for(int j=0;j<temp.length();j++){
            if(temp[j] == '('){
                s.push(temp[j]);
            }else if(!s.empty() && temp[j] == ')' && s.top() == '('){
                s.pop();
            }else{
                s.push('@');
                break;
            }
        }
        if(s.empty())cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}