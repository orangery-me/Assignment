//
//  main.cpp
//  ShortestPath_TreeDataStructure
//
//  Created by Đinh Bảo Châu Thi on 12/17/22.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n,m,x1,y1,x2,y2;
int a[1000][1000]={};
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int d[1000][1000];
int visited[1000][1000]={};

queue <pair<int,int>> ucv;

void input(){
    cin >>n>>m;
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=m; ++j)
            cin >>a[i][j];
    
}

void bfs(int x, int y){
    ucv.push({x,y});
    visited[x][y]=1;
    d[x][y]=0;
    while (!ucv.empty()){

        pair <int,int> recent=ucv.front();
        ucv.pop();
        for (int k=0; k<4; ++k){
            
            int x0=recent.first + dx[k];
            int y0= recent.second +dy[k];
            
            if (a[x0][y0]==1 && visited[x0][y0] ==0 ){
                ucv.push({x0,y0});
                visited[x0][y0]=1;
                d[x0][y0]=d[recent.first][recent.second]+1;
                cout <<x0<<" "<<y0<<endl;
                
                if (x0==x2 && y0==y2)
                    break;
            }
        }
        
    }
}

void ShortestPath(int x1, int y1, int x2, int y2){
    bfs(x1,y1);
    if (visited[x2][y2])
        cout <<"Co duong di: "<<d[x2][y2]<<endl;
    else
        cout <<"khong co duong di"<<endl;
}
int main(int argc, const char * argv[]) {
    input();
    cin >>x1>>y1>>x2>>y2;
    ShortestPath(x1, y1, x2, y2);
}
