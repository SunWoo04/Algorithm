#include <bits/stdc++.h>
using namespace std;
int main(){
    int num; cin >> num;
    int i = 6;
    int value = 1;
    int cnt = 0;
    while (true){
        cnt++;
        if(num<=value)break;
        value += i;
        i += 6;
    }
    cout << cnt;
    
}

