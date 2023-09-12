#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int dp[1000] = {1,2,4,};
        int n; cin >> n;

        for(int i=3;i<n;i++){
            dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]);
        }

        cout << dp[n-1] << '\n';
    }
}