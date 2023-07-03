#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    string str;
    stack<int> st;
    for(int i =0;i<num;i++){
        int sum;
        cin >> str;
        if(str == "push"){
            cin >> sum;
            st.push(sum);
        }
        if(str == "pop"){
            if(st.empty()){
                cout << -1 << endl;
            }else{
                cout << st.top() << endl;
                st.pop();
            }
        }
        if(str == "size"){
            cout << st.size() << endl;
        }
        if(str == "empty"){
            if(st.empty()){
                cout << 1 << endl;
            }else{
                cout << 0 << endl;
            }
        }
        if(str == "top"){
            if(st.empty()){
                cout << -1 << endl;
            }else{
                cout << st.top() << endl;
            }
        }
    }
}