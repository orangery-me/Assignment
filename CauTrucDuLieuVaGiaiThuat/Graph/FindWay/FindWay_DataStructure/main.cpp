//
//  main.cpp
//  FindWay_DataStructure
//
//  Created by Đinh Bảo Châu Thi on 12/16/22.
//

#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int dinh,canh,a,b;
vector <int> adj[1000];
int visited[1000]={};
int parent[1000];
stack <int> path;
queue <int> ucv;

void input(){
    cin >>dinh>>canh;
    for (int i=1; i<=canh; ++i){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void dfs(int u){
    visited[u]=1;
    for (int it : adj[u])
        if (!visited[it]){
            parent[it]=u;
            dfs(it);
        }
    
}

void bfs(int u){
    ucv.push(u);
    visited[u]=1;
    
    
    while (!ucv.empty()){
        int x=ucv.front();
        ucv.pop();
        for (int it:adj[x])
            if ( !visited[it] ){
                visited[it]=1;
                parent[it]=x;
                ucv.push(it);
            }
    }
}

void findPath(int a, int b){
    
    if (visited[b]==1){
        
        cout <<"Co duong di: ";
        
        path.push(b);
        while (b!= a){
            b=parent[b];
            path.push(b);
        }
        
        while (!path.empty()){
            cout <<path.top()<<" ";
            path.pop();
        }
        
    }
    else
        cout <<"Khong co duong di";
    
}
int main(int argc, const char * argv[]) {
    input();
    cin >>a>>b;
    dfs(a);
    //bfs(a);
    findPath(a,b);
}
