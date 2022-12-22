//
//  main.cpp
//  Kahn_Topological_Sorting
//
//  Created by Đinh Bảo Châu Thi on 12/17/22.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m,x,y;
vector <int> adj[1000];
int bac[1000]={};
int visited [1000]={};
//int xoa[1000]={};
queue <int> ucv;

void input(){
    cin >>n>>m;
    for (int i=1; i<=m; ++i){
        cin >>x>>y;
        adj[x].push_back(y);
        bac[y]++;
    }
}

void Kahn(){
    
    for (int i=1; i<=n; ++i)
        if (! bac[i] )
            ucv.push(i);
    
    while (!ucv.empty()){
  
        int x=ucv.front();
        cout <<x<<" ";
        ucv.pop();
        //xoa[x]=1;
        for (int item:adj[x]){
            bac[item]--;
            if (bac[item]==0)
                ucv.push(item);
        }
    }
        
}

int main(int argc, const char * argv[]) {
    input();
    Kahn();
    //output();
}
