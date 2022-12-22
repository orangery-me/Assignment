//
//  main.cpp
//  DFS_TreeDataStructure
//
//  Created by Đinh Bảo Châu Thi on 12/15/22.
//

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int dinh,canh;
vector <int> adj[1000];
int visited[1000]={};

void input(){
    cin >>dinh>>canh;
    for (int i=1; i<=canh; ++i){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void dfs(int u){
    visited [u]=1;
    cout <<u<<" ";
    for (int it:adj[u])
        if (!visited[it])
            dfs(it);
}

int main(int argc, const char * argv[]) {
    input();
    dfs(1);
    return 0;
}
