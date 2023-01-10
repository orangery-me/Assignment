//
//  main.cpp
//  ThuatToanKosaraju
//
//  Created by Đinh Bảo Châu Thi on 12/22/22.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <stack>

using namespace std;

const int Max=100001;
int n,m,x,y;
int visited[Max]={};
vector <int> adj[Max],Tadj[Max];
stack <int> topo;

void input(){
    cin >>n>>m;
    
    for (int i=1; i<=m; ++i){
        cin >>x>>y;
        adj[x].push_back(y);
        Tadj[y].push_back(x);
        
    }
}

void dfs1( int root){
    visited[root]=1;
    for (int it: adj[root])
        if (! visited[it])
            dfs1(it);
    topo.push(root);
    
}

void dfs2(int root){
    visited[root]=1;
    for (int it: Tadj[root])
        if (! visited[it])
            dfs2(it);
}

void kosaraju(){
    
    for (int i=1; i<=n; ++i)
        if (!visited[i])
            dfs1(i);
    
    memset(visited,0,sizeof(visited));
    int count=0;
    vector <int> v;
    
    while (! topo.empty()){
        int x=topo.top();
        topo.pop();
        if (! visited[x]){
            v.push_back(x);
            dfs2(x);
            count++;
            }
        
    }
    cout <<count<<endl;
}

int main(int argc, const char * argv[]) {
    input();
    kosaraju();
}
