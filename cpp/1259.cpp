#include <bits/stdc++.h>

using namespace std;

int main(){
    string num;
    while(true){
        cin >> num;
        int flag = 0;
        if (num == "0") break;
        for(int i=0;i<num.length()/2;i++){
            if(num[i] != num[(num.length()-1)-i]){
                cout << "no\n";
                flag = 1;
                break;
            }
        }
        if(!flag) cout << "yes\n";
    }
}