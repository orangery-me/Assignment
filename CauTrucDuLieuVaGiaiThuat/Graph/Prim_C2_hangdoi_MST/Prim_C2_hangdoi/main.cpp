//
//  main.cpp
//  Prim_C2_hangdoi
//
//  Created by Đinh Bảo Châu Thi on 12/26/22.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int nmax=1000;
struct edge{
    int x,y,v;
};
int n,m;
int used[nmax]={};
int parent[nmax];
int d[nmax]={};
vector <pair<int,int>> adj[nmax];

void input(){
    cin >>n>>m;
    for (int i=1; i<=m; ++i){
        int x,y,z;
        cin >>x>>y>>z;
        adj[x].push_back({z,y});
        adj[y].push_back({z,x});
    }
    
    for (int i=1; i<=n; ++i)
        d[i]=INT_MAX;
}

void prim(int u){
    priority_queue < pair<int,int>, vector <pair<int,int>>, greater <pair<int,int>>> pq;
    vector <edge> vmst;
    int res=0;
    pq.push({0,u});
    while (!pq.empty() ){
        
        pair <int,int> top=pq.top();
        int dinh=top.second, trongso=top.first;
        pq.pop();
        
        if (used[dinh]==1)
            continue;
        
        used[dinh]=1;
        res+=trongso;
        
        // them vao cac canh thoa man cay khung - khong lay dinh=1 vi chua co canh
        if (u!=dinh)
            vmst.push_back({dinh,parent[dinh],trongso});
        
        // duyet tat ca cac dinh ke voi dinh duoc chon
        for (auto it: adj[dinh]){
            int y=it.second;
            int v=it.first;
            if (used[y] ==0 && v <d[y] ){
                pq.push(it);
                d[y]=v;
                parent[y]= dinh;
            }
        }
            
        
    }
    
    cout <<res<<endl;
    for (auto it: vmst){
        cout <<it.x<<" "<<it.y<<" "<<it.v<<endl;
    }
}

int main(int argc, const char * argv[]) {
    input();
    prim(1);

}
