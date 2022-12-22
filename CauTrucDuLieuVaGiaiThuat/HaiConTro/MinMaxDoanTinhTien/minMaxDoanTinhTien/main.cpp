//
//  main.cpp
//  minMaxDoanTinhTien
//
//  Created by Đinh Bảo Châu Thi on 12/10/22.
//

#include <iostream>
#include <deque>
using namespace std;
int a[100000];

int main() {
    int m,k; cin>>m>>k;
    deque <int> ucv;
    
    for (int i=1; i<=m; ++i)
        cin>>a[i];
    for (int i=1; i<=m; ++i){
        if (ucv.empty () ==false && ucv.front() <= i-k)
            ucv.pop_front();
        
        while (ucv.empty()==false && a[i]<a[ucv.back()])
            ucv.pop_back();
        ucv.push_back(i);
        
        if (i>=k)
            cout <<a[ucv.front()]<<" ";

    }
    
}
