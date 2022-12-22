//
//  main.cpp
//  Grid_ConnectComponents
//
//  Created by Đinh Bảo Châu Thi on 12/16/22.
//

#include <iostream>
//#include <vector>
#include <queue>

using namespace std;

int n,m;
int a[1000][1000]={};
int visited[1000][1000]={};
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
queue <pair <int,int> > ucv;

void input(){
    cin >>n>>m;
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=m; ++j)
            cin >>a[i][j];
}

void dfs(int i, int j){
    visited[i][j]=1;
    cout <<i<<" "<<j<<"   ";
    for (int k=0; k<4; ++k ){
        int i1= i+ dx[k];
        int j1= j+ dy[k];
        if ( a[i1][j1]==1 && !visited[i1][j1]){
            visited[i1][j1]=1;
            dfs(i1,j1);
        }
    }
}

void bfs(int i, int j){
    ucv.push({i,j});
    
    while (!ucv.empty()){
        pair <int,int> top= ucv.front();
        ucv.pop();
        cout <<top.first<<" "<<top.second<<"   ";

        for (int k=0; k<4; ++k){
            int i1= top.first+dx[k];
            int j1= top.second+dy[k];
            if (a[i1][j1]==1 && !visited[i1][j1] ){
                visited[i1][j1]=1;
                ucv.push({i1,j1});
            }
        }
        
    }
    
}

int main() {
    
    int count=0;
    input();
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=m; ++j){
            if ( a[i][j]==1 && !visited[i][j] ){
                count++;
                cout <<"Thanh phan lien thong thu "<<count<<" : ";
                bfs(i,j);
                cout <<endl;
            }
        }
    
   // cout <<count<<endl;
    
}
