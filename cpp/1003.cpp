#include <bits/stdc++.h>
using namespace std;

int dp[41];

int fibonnacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    if(dp[n]) return dp[n];
    else return dp[n] = fibonnacci(n-1) + fibonnacci(n-2);
}

main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        fibonnacci(n);
        if (n == 0) cout << 1 << ' ' << 0 << '\n';
        else cout << fibonnacci(n-1) << ' ' << fibonnacci(n) << '\n';
    }
}