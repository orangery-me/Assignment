//
//  main.cpp
//  ve_nha
//
//  Created by Đinh Bảo Châu Thi on 1/9/23.
//

#include <iostream>
using namespace std;

int bi_search(int a[], int l, int r, int x){
    
    while (r -l > 1 ){
        int mid=(l+r)/2;
        
        if (a[mid] <=x) l=mid;
        
        if (a[mid] > x) r=mid-1;
    }
    if ( a[r] <= x ) return a[r];
    if (a[l] <= x) return a[l];
    return -1;
        
}
/*
int find(int a[], int n, int x){
    for (int j=0; j<n ;++j){
        if (a[j] <=x && (a[j+1] >x || j ==n-1) )
            return a[j];
    }
    return -1;
}*/
int main(int argc, const char * argv[]) {
    int M,n;
    int a[100000],x[100000];
    cin >>n;
    for (int i=0; i<n; ++i){
        cin >>a[i];
    }
    cin >>M;
    for (int i=0; i<M; ++i)
    cin >>x[i];
    for (int i=0; i<M; ++i)
        cout<<bi_search(a, 0, n-1, x[i])<<endl;
    
}
