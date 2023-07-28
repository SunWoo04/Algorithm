#include <bits/stdc++.h>
using namespace std;
int num,sum;
string str;
queue<int> qu;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    cin >> num;
    for(int i =0;i<num;i++){
        cin >> str;
        if(str == "push"){
            cin >> sum;
            qu.push(sum);
        }else if(str == "pop"){
            if(qu.empty()){
                cout << -1 << '\n';
            }else{
                cout << qu.front() << '\n';
                qu.pop();
            }
        }else if(str == "size"){
            cout << qu.size() << '\n';
        }else if(str == "empty"){
            if(qu.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else if(str == "front"){
            if(qu.empty()){
                cout << -1 << '\n';
            }else{
                cout << qu.front() << '\n';
            }
        }else{
            if(qu.empty()){
                cout << -1 << '\n';
            }else{
                cout << qu.back() << '\n';
            }
        }
    }
}