//
//  main.cpp
//  Kruskal
//
//  Created by Đinh Bảo Châu Thi on 12/26/22.
//

#include <iostream>
#include <vector>

using namespace std;

struct edge{
    int start;
    int end;
    int value;
};
const int Max=10000;
int n,m;
int parent[Max],sz[Max];
vector <edge> canh;

void make_set(){
    for (int i=1; i<=n; ++i){
        parent[i]=i;
        sz[i]=1;
    }
}

int find(int u){
    if (parent[u] ==u)
        return u;
    return parent[u]=find(parent[u]);
}

bool Union(int a, int b){
    a=find(a);
    b=find(b);
    if (a==b)
        return false;
    
    if (sz [a] <sz[b]) swap(a,b);
    parent[b]=a;
    sz[a]+= sz[b];
    
    return true;
}

void input(){
    cin >>n>>m;
    for (int i=1; i<=m; ++i){
        int x,y,z;
        cin >>x>>y>>z;
        canh.push_back({x,y,z});
    }
}

bool cmp(edge a, edge b){
    if (a.value < b.value)
        return true;
    return false;
}
void kruskal(){
    // tao cay khung cuc tieu rong
    vector <edge> MST;
    int d=0,i=0;
    
    // sort danh sach canh theo chieu dai
    sort (canh.begin(), canh.end(), cmp);
    
    while (MST.size() <n-1 ){
        
        if ( Union( canh[i].start, canh[i].end) ==true  ){
            MST.push_back(canh[i]);
            d+= canh[i].value;
        }
        
        i++;
    }
    
    cout <<d<<endl;
    for (auto it: MST){
        cout <<it.start<<" "<<it.end<<" "<<it.value<<endl;
    }
}

int main() {
    input();
    make_set();
    kruskal();
        
}
