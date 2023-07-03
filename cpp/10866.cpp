#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    deque<int>dq;
    for(int i =0; i<num; i++){
        string str; cin >> str;
        if(str == "push_front"){
            int sum; cin >> sum;
            dq.push_front(sum);
        }else if(str == "push_back"){
            int sum; cin >> sum;
            dq.push_back(sum);
        }else if(str == "pop_front"){
            if(dq.empty()){
                cout << -1 << "\n";
            }else{
                cout << dq.front()<< "\n";
                dq.pop_front();
            }
        }else if(str == "pop_back"){
            if(dq.empty()){
                cout << -1 << "\n";
            }else{
                cout << dq.back()<< "\n";
                dq.pop_back();
            }
        }else if(str == "size"){
            cout << dq.size()<< "\n";
        }else if(str == "empty"){
            if(dq.empty()){
                cout << 1 << "\n";
            }else{
                cout << 0 << "\n";
            }
        }else if(str == "front"){
            if(!dq.empty()){
                cout << dq.front()<< "\n";
            }else {
                cout<<-1<<"\n";
            }
        }else if(str == "back"){
            if(!dq.empty()){
                cout << dq.back()<< "\n";
            }else {
                cout<<-1<<"\n";
            }
        }
    }
}