//
//  main.cpp
//  KT_ChuTrinh_TreeDataStructure
//
//  Created by Đinh Bảo Châu Thi on 12/17/22.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n,m,x,y;
int visited[1000]={};
int parent[1000];
vector <int> adj[1000];

void input(){
    cin >>n>>m;
    for (int i=1; i<=m; ++i){
        cin >>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

bool dfs(int u,int par){
    visited[u]=1;
    for (int item: adj[u])
        if (!visited[item]){
            if ( dfs(item,u)==true)
                return true;
                }
        else
            if (item != par)
                return true;
    return false;
}

bool bfs(int u){
    
    visited[u]=1;
    queue <int> ucv;
    ucv.push(u);
    
    while (!ucv.empty()){
        int x=ucv.front();
        ucv.pop();
        for (int item: adj[x])
            if (!visited[item]){
                
                visited[item]=1;
                parent[item]=x;
                ucv.push(item);
    
            }
        else
            if ( item!=parent[x] )
                return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    input();
   // if (dfs(1,0)==true)
    if (bfs(1)==true)
        cout <<"La chu trinh";
    else
        cout<<"Khong la chu trinh";
}
