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
void connectedComponent(){
    int count=0;
    for (int i=1; i<=dinh ;++i)
        if (!visited[i]){
            count++;
            cout <<"Cac dinh thuoc thanh phan lien thong thu "<<count<<" : ";
            dfs(i);
            cout <<endl;
        }

}

int main(int argc, const char * argv[]) {
    input();
    connectedComponent();
    return 0;
}
