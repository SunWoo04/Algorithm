#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    string str;
    queue<int> qu;
    for(int i =0;i<num;i++){
        int sum;
        cin >> str;
        if(str == "push"){
            cin >> sum;
            qu.push(sum);
        }
        if(str == "pop"){
            if(qu.empty()){
                cout << -1 << endl;
            }else{
                cout << qu.front() << endl;
                qu.pop();
            }
        }
        if(str == "size"){
            cout << qu.size() << endl;
        }
        if(str == "empty"){
            if(qu.empty()){
                cout << 1 << endl;
            }else{
                cout << 0 << endl;
            }
        }
        if(str == "front"){
            if(qu.empty()){
                cout << -1 << endl;
            }else{
                cout << qu.front() << endl;
            }
        }
        if(str == "back"){
            if(qu.empty()){
                cout << -1 << "\n";
            }else{
                cout << qu.back() << "\n";
            }
        }
    }
}