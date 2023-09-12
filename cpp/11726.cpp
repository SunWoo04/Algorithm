#include <bits/stdc++.h>
using namespace std;
int main(){
    //dp[i] = dp[i-1] + dp[i-2];

    int dp[1000] = {1,2,};
    int n; cin >> n;

    for(int i=2;i<n;i++){
        dp[i] = (dp[i-1] + dp[i-2])%10007;
    }

    cout << dp[n-1];
}
/*
원본배열
디피배열
디피배열 초기식 보통(1,2까지)
for문으로 디피배열 생성
디피배열 n번째 출력
*/