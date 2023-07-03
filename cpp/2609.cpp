#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin >> a >> b;
    int max=0;
    int min;
    for(int i=1;i<=INT_MAX/10;i++){
        if(a%i == 0 && b%i == 0){
            if(max<i){
                max = i;
            }
        }
    }
    cout << max << '\n';
    min = (a*b)/max; // 최대공약수*최소공배수 = 두 수의 곱
    cout << min << '\n';
    
}