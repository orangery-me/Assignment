//
//  main.cpp
//  Topological_Sorting_TreeDataStructure
//
//  Created by Đinh Bảo Châu Thi on 12/17/22.
//

#include <iostream>
#include <fstream>
#include <stack>
#include <vector>
using namespace std;

int n,m,x,y;
vector <int> adj[1000];
int visited[1000]={};
vector <int> TopoList;

void input(){
    cin >>n>>m;
    for (int i=1; i<=m; ++i){
        cin >>x>>y;
        adj[x].push_back(y);
    }
}

void dfs(int parent){
    visited[parent]=1;
    for (int it:adj[parent])
        if (!visited[it])
            dfs(it);
        
    TopoList.push_back(parent);

}

int main() {
 
    input();
    for (int i=1; i<=n; ++i)
        if (!visited[i])
            dfs(i);
    reverse(TopoList.begin(), TopoList.end());
    for (int it: TopoList)
        cout <<it<<" ";
}
