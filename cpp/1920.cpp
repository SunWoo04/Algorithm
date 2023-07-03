#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N; cin >> N;
    vector<int>v1;
    for(int i=0;i<N;i++){
        int temp; cin >> temp;
        v1.push_back(temp);
    }

    int M; cin >> M;
    vector<int>v2;
    for(int i=0;i<M;i++){
        int temp; cin >> temp;
        v2.push_back(temp);
    }

    vector<int>answer;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(v2[i] == v1[j]){
                answer.push_back(1);
                break;
            }
        }
        if(answer.size() != i+1){
            answer.push_back(0);
        }
    }
    for(int i=0;i<answer.size();i++){
        cout << answer[i] << '\n';
    }
}