#include <bits/stdc++.h>
using namespace std;
int main(){
    int test_case; cin >> test_case;
    for(int i=0;i<test_case;i++){
        map<string,int>m;
        int num; cin >> num;
        for(int j=0;j<num;j++){
            string item,type; cin >> item >> type;
            m[type]++;
        }
        int answer = 1;
        for(auto j : m)answer *= (j.second+1);
        answer -= 1;
        cout << answer << '\n';
    }
}