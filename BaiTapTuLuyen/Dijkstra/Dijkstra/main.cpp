//
//  main.cpp
//  Dijkstra
//
//  Created by Đinh Bảo Châu Thi on 1/1/23.
//

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const long long nmax=1e6;
int n,m;
vector <pair<int,int>> adj[nmax];
int visited[nmax];

void input(){
    cin >>n>>m;
    for (int i=1; i<=m; ++i){
        int x,y,v;
        cin >>x>>y>>v;
        adj[x].push_back({y,v});
        // y: dinh ke, v: trong so cua canh tu x den y
    }
}

const long long inf=1e9+1;
void dijkstra(int s){
    // Mang luu do dai duong di toi mot dinh
    vector <long long> d(n+1,inf);
    d[s]=0;
    
    // mang luu khoang cach va dinh tuong ung
    priority_queue < pair<int,int>, vector <pair<int,int>>, greater < pair<int,int>> > q;
    q.push({0,s});
    while (! q.empty()){
        // chon ra dinh co khoang cach tu s den no la nho nhat
        long long value=q.top().first;
        int ver=q.top().second;
        q.pop();
        
        // Khi da cap nhap lai gia tri d[y],trong queue co 2 gia tri 'value' cua ver,
        // Bo qua gia tri ver cu
        if (value > d[ver])
            continue;
        
        for (auto it: adj[ver] ){
            int y=it.first;
            long long v=it.second;
            if ( d[y] > d[ver] + v){
                d[y]=d[ver] +v;
                q.push({d[y],y});
            }
            
        }
        
    }
    
    for (int i=1; i<=n; ++i)
        cout <<d[i]<<" ";
}


int main(int argc, const char * argv[]) {
    input();
    dijkstra(1);
    return 0;
}
