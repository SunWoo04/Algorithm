#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    int answer = 1;
    for(int i=n;i>n-k;i--){
        answer *= i;
    }
    for(int i=k;i>=1;i--){
        answer /= i;
    }
    cout << answer;
}