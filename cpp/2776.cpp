#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    map<int,int>m;
    int test_case; cin >> test_case;
    for(int i=0;i<test_case;i++){
        int num; cin >> num;
        for(int j=0;j<num;j++){
            int temp; cin >> temp;
            m[temp]++;
        }
        cin >> num;
        for(int j=0;j<num;j++){
            int temp; cin >> temp;
            if(m.count(temp) == 1)cout << '1' << '\n';
            else cout << '0' << '\n';
        }
        m.clear();
    }
}