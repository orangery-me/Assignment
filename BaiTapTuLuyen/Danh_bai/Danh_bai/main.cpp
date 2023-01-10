//
//  main.cpp
//  Danh_bai
//
//  Created by Đinh Bảo Châu Thi on 1/10/23.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin>>n;
    vector <int,int> b;
    vector <int,int> k;
    int used[202];
    
    for (int i=1; i<=n; ++i){
        int x; cin >>x;
        b.push_back(x);
    }
    for (int i=1; i<=2*n; ++i)
    {
        if ()
            k.push_back(i);
        used[i]=0;
    }
    
    sort(b.begin(),b.end());
    sort(k.begin(),k.end());
    int i=0,j=0;
    int count1=0,count2=0;
    while (count1 <n && count2<n){
        
        while (i<n && j<n){
            while ( (k[j] <b[i] && j<n) || used[ k[j] ]==1 )
                j++;
            if (k[j] >b[i]){
                used[ k[j] ]=1;
                used[ b[i] ]=1;
                i++; count1++;
                j++; count2++;
            }
            
            while ( ( b[i] < k[j] && i<n) || used[ b[i] ]==1)
                i++;
            if (b[i] >k[j]){
                used[ k[j] ]=1;
                used[ b[i] ]=1;
                i++; count1++;
                j++; count2++;
            }
        }
        
        if (i==n) i=0;
        if (j==n) j=0;
    }
    
    cout <<count1<<" "<<count2<<endl;
    
}
