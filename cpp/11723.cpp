#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int tc; cin >> tc;
    string order;
    int num,bit = 0;
    for(int i=0;i<tc;i++){
        cin >> order;
        if(order == "add"){
            cin >> num;
            bit |= (1 << num);
        }
        if(order == "remove"){
            cin >> num;
            bit &= ~(1 << num);
        }
        if(order == "check"){
            cin >> num;
            if(bit & (1 << num)){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }
        if(order == "toggle"){
            cin >> num;
            bit ^= (1 << num);
        }
        if(order == "all"){
            bit = (1 << 21) - 1;
        }
        if(order == "empty"){
            bit = 0;
        }
    }
}
