//
//  main.cpp
//  BFS_TreeDataStructure
//
//  Created by Đinh Bảo Châu Thi on 12/14/22.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
 vector <int> adj[1000];
 
 int main(int argc, const char * argv[]) {
 int n, m; cin>>n>>m;
 int x,y;
 //Nhap danh sach canh
 for (int i=1; i<=m ;++i){
 cin >>x>>y;
 adj[x].push_back(y);
 adj[y].push_back(x);
 }
 // in ra danh sach ke
 for (int i=1; i<=n; ++i){
 cout <<i<<"   ";
 for (int item:adj[i])
 cout <<item<<" ";
 cout <<endl;
 }
 
 }
 */
/*
int a[1000][1000];
int n;
vector <int> adj[1000];
int main(){
    cin >>n;
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j)
            cin >>a[i][j];
    
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=n; ++j)
            if (a[i][j]==1)
                adj[i].push_back(j);

    }
    for (int i=1; i<=n; ++i){
        cout <<i<<" : ";
        for (auto it: adj[i])
            cout <<it<<" ";
        
        cout <<endl;
        
    }
}
 */

int n;
int a[1000][1000];
vector <int> adj[1000];

int main(){
    int n; cin>>n;
    for (int i=1; i<=n; ++i){
        string s;
        getline(cin,s);
        for (auto it:s){
            if (it!=' '){
                int x= stoi(it);
                adj[i].push_back(x);

            }
        }
    }
    
    for (int i=1; i<=n; ++i){
        for (int it:adj[i])
            a[i][it]=1;
            
    }
    
        for (int i=1; i<=n; ++i){
            for (int j=1; j<=n; ++i)
                cout <<a[i][j]<<" ";
            cout <<endl;
        }
}
