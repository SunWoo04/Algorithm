#include <bits/stdc++.h>
using namespace std;
int main(){
    int dp[50001] = {0,1,2,3,};
    int n; cin >> n;

    // int temp = 2;
    for(int i=4;i<=n;i++){
        // if(i == (temp+1)*(temp+1)) temp++;
        dp[i] = dp[i-1] + dp[1];
        for(int j=1;j*j<=i;j++){
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }

    cout << dp[n] << '\n';
}