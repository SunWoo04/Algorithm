#include <bits/stdc++.h>
using namespace std;

int vertex,edge;
int len=0;

vector<int>graph[101];

bool dfs_visited[101];

void dfs(int start){
    len++;
    dfs_visited[start] = true;
    //cout << start << ' ';
    for(int i=0;i<graph[start].size();i++){
        if(!dfs_visited[graph[start][i]]){
            dfs(graph[start][i]);
        }
    }
}


int main(){
    cin >> vertex >> edge;
    for(int i=0;i<edge;i++){
        int a,b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);
    cout << len-1;
}