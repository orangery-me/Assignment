//
//  main.cpp
//  MergeSort
//
//  Created by Đinh Bảo Châu Thi on 12/18/22.
//

#include <iostream>
using namespace std;
int a[100000];

void ConnectArray(int a[], int l, int r, int mid){
    int size1= mid-l+1;
    int size2= r-mid;
    int b[size1],c[size2];
    
    for (int t=0; t<size1 ;  ++t){
        b[t] = a[t + l];
        
    }
    for (int t=0; t<size2 ; ++t){
        c[t] = a[mid +1 +t];
    }
    
    int i=0, j=0,k=l;
    while (i< size1 && j<size2){
        if (c[j] < b[i]){
            a[k]= c[j];
            j++;
        }
        else{
            a[k]= b[i];
            i++;
        }
        k++;
    }
    
    while (j<size2){
        a[k]=c[j];
        k++;
        j++;
    }
    
    while (i<size1){
        a[k]=b[i];
        k++;
        i++;
    }
    
}

void Merge(int a[], int l, int r){
    if ( l < r){
        int mid=(l+r)/2;
        Merge(a,l,mid);
        Merge(a, mid+1, r);
        ConnectArray(a,l,r,mid);
    }
}

int main() {
    int n; cin >>n;
    
    for (int i=0; i<n; ++i)
        cin >>a[i];
    
    Merge(a, 0, n-1);

    for (int i=0; i<n; ++i)
        cout <<a[i]<<" ";
}
