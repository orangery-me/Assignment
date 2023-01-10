//
//  main.cpp
//  BiPartite
//
//  Created by Đinh Bảo Châu Thi on 12/28/22.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int nmax=1000;
int n,m;
vector <int> adj[nmax];
int color[nmax];

void input(){
    cin >>n>>m;
    for (int i=1; i<=m; ++i){
        int x,y;
        cin >>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(color,-1,sizeof(color));
}

bool coloring(int u){
    queue <int> ucv;
    color[u]=1; //1: Blue, 0:Red
    ucv.push(u);
    
    while (!ucv.empty()) {
        
        int x=ucv.front();
        ucv.pop();
        for (int it: adj[x]){
            if (color[it]==-1){
                color[it]=1-color[x];
                ucv.push(it);
            }
            
            else
                if (color[x]==color[it])
                    return false;
            
        }
    }
    return true;
    
}

bool coloringdfs(int u, int par){
    color[u]=1-color[par];
    for (int it: adj[u]){
        if (color[it] ==-1){
            if (coloringdfs(it,u) == false)
                return false;
        }
        else{
            if (color[it] == color [u])
                return false;
        }
    }
    return true;
}
int main(int argc, const char * argv[]) {
    input();
    for (int i=1; i<=n; ++i)
        if (color[i]==-1){
            color[0]=0;
            if (coloringdfs(i,0)==false){
                cout <<"NO";
                return 0;
            }
        }
    cout <<"YES";

}
