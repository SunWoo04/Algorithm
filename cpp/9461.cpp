#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long dp[100] = {1,1,1,};
        int n; cin >> n;

        for(int i=3;i<n;i++){
            dp[i] = dp[i-3] + dp[i-2];
        }
        
        cout << dp[n-1] << '\n';
    }
}