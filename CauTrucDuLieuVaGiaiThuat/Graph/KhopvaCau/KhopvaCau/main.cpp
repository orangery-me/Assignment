//
//  main.cpp
//  KhopvaCau
//
//  Created by Đinh Bảo Châu Thi on 12/28/22.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n,m;
vector <int> adj[1000];
int visited[10000]={};
vector <pair<int,int>> dscanh;

void input(){
    // n:so dinh, m:so canh
    cin>>n>>m;
    for (int i=1; i<=m; ++i){
        int x,y;
        cin >>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        dscanh.push_back({x,y});
    }
}

void bfs(int u){
    queue <int> ucv;
    
    ucv.push(u);
    while(ucv.empty()==false){
        
        int x=ucv.front();
        ucv.pop();
        
        for (auto it:adj[x])
            
            if (! visited[it]){
                
                visited[it]=1;
                ucv.push(it);
            }
    }
}



int tplt(){
    int count=0;
    for (int i=1; i<=n; ++i){
        if (! visited[i]){
            count++;
            bfs(i);
        }
    }
    return count;
    
}
void dinhtru(){
    int res=0;
    int pre=tplt();
    
    for (int i=1; i<=n; ++i){
        memset(visited,0,sizeof(visited));
        //loai bo dinh i
        visited[i]=1;
        if (tplt() > pre){
            res++;
            cout <<i<<endl;
        }
    }
    cout <<res<<endl;
}

int main(int argc, const char * argv[]) {
    input();
     dinhtru();
}
