#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    for(int i=0;i<num;i++){
        for(int j=0;j<i;j++){
            cout << ' ';
        }
        for(int k=0;k<((num-i-1)*2)+1;k++){
            cout << '*';
        }
        cout << '\n';
    }
}