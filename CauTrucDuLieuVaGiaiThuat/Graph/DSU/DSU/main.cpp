//
//  main.cpp
//  DSU
//
//  Created by Đinh Bảo Châu Thi on 12/23/22.
//

#include <iostream>
using namespace std;

int parent[1000];

int find(int v){
    if (v== parent[v])
        return v;
    
       return parent[v]= find(parent[v]);
}

int main(int argc, const char * argv[]) {
    for (int i=1 ;i<=9; ++i){
        cin >>parent[i];
    }
    
    for (int i=1 ;i<=9; ++i){
        cout <<find(i)<<" ";
    }

        
}
