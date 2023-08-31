#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned int k,n; cin >> k >> n;
    unsigned int len[k];
    unsigned int maxi = 0;

    for(int i=0;i<k;i++){
        cin >> len[i];
        if(maxi < len[i]) maxi = len[i];
    }

    unsigned int left, mid, right,ans;
    left = 1; right = maxi; ans = 0;
    
    while(left <= right){
        mid = (left + right)/2;
        unsigned int all = 0;

        for(int i=0;i<k;i++){
            all += len[i] / mid;
        }

        if(all >= n){
            left = mid + 1;
            if(ans < mid) ans = mid;
        }else{
            right = mid - 1;
        }
    }
    cout << ans;
}