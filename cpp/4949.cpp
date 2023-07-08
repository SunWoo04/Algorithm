#include <bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        stack<char>s;
        string str;
        getline(cin, str);
        if(str == ".")break;
        bool flag = 0;
        for(int i=0;i<str.length();i++){
            if(str[i] == '(' || str[i] == '['){
                s.push(str[i]);
            }else if (str[i] == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
                else {
                    flag = 1;
                    break;
                }
            }else if (str[i] == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                }
                else {
                    flag = 1;
                    break;
                }
            }
        }
        if(s.empty() && flag == 0)cout << "yes" << '\n';
        else cout << "no" << '\n';

    }
}