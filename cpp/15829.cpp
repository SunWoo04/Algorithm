#include <bits/stdc++.h>
#define MOD 1234567891;

using namespace std;
int main(){
    int num; cin >> num;
    string alfabet; cin >> alfabet;
    long long answer = 0;
    long long temp = 1;
    for(int i=0;i<alfabet.length();i++){
        alfabet[i] -= 96;
        answer = (answer + alfabet[i]*temp)%MOD;
        temp = (temp*31)%MOD;
    }
    cout << answer;
}