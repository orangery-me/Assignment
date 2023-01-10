//
//  main.cpp
//  Prim_MST
//
//  Created by Đinh Bảo Châu Thi on 12/26/22.
//

#include <iostream>
#include <vector>

using namespace std;
const int nmax=10000;
int n,m;
int used[nmax]={};
vector <pair <int,int>> adj[nmax];

struct edge{
    int x,y,v;
};

void input(){
    cin >>n>>m;
    
    for (int i=1; i<=m; ++i){
        int x,y,v;
        cin >>x>>y>>v;
        adj[x].push_back({y,v});
        adj[y].push_back({x,v});
    }
    
}

void prim(int u){
    vector <edge> MST;
    used[u]=1; // dinh u thuoc Vmst neu used[u]=1; thuoc V neu used[u]=0
    int d=0;
    
    while ( MST.size() < n-1 ){
        // chon canh e=(x,y) co x thuoc v, y thuoc Vmst va dmin
        int dmin= INT_MAX;
        int x,y;
        
        for (int i=1;i <=n; ++i){
            // chon mot dinh thuoc Vmst
            if ( used[i] ==1 )
                // lay ra cac dinh ke voi i va thuoc v
                // neu trong so nho hon dmin thi luu lai
                for (auto item:adj[i] )
                    
                    if ( used[item.first] ==0 && item.second <dmin){
                        dmin=item.second;
                        // luu lai hai dinh thoa man
                        x=i;
                        y=item.first;
                    }
            
        }
        d+=dmin;
        used[y]=1;
        MST.push_back({x,y,dmin});
        
    }
    
    cout <<d<<endl;
    for (auto item: MST){
        cout <<item.x<<" "<<item.y<<" "<<item.v<<endl;
    }
}


int main(int argc, const char * argv[]) {
    input();
    prim(1);
}
