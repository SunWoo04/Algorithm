#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,string>m;
    int site_num,find_pw; cin >> site_num >> find_pw;
    for(int i=0;i<site_num;i++){
        string site,pw; cin >> site >> pw;
        m[site] = pw;
    }
    for(int i=0;i<find_pw;i++){
        string site; cin >> site;
        cout << m[site] << '\n';
    }

}