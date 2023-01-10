//
//  main.cpp
//  PTIT_SX_Bai19
//
//  Created by Đinh Bảo Châu Thi on 1/4/23.
//

#include <iostream>
#include <algorithm>
using namespace std;

const int nmax=1e6;
int a[nmax];
int n,k;

void input(){
    cin >>n>>k;
    for (int i=0; i<n; ++i)
        cin >>a[i];
}
int bi_search(int a[], int l, int r, int x){
    
    while (l< r){
        int mid=(l+r)/2;
        
        if (a[mid] <=x) l=mid+1;
        
        if (a[mid] > x) r=mid;
    }
    if ( a[l] <= x) return 0;
    else return (n-l);
        
}
void demcap(){
    long long sum=0;
    sort(a,a+n);
    for (int i=0; i<n-1; ++i){
        sum+=bi_search(a,i+1,n-1,k-a[i]);
    }
    cout <<sum;
}

int main(int argc, const char * argv[]) {
    input();
    demcap();
    
}
