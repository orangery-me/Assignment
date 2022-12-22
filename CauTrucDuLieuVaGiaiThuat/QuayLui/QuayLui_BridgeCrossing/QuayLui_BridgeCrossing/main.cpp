//
//  main.cpp
//  QuayLui_BridgeCrossing
//
//  Created by Đinh Bảo Châu Thi on 12/16/22.
//

#include <iostream>
using namespace std;

/*void MergeSort( int a[], int l, int r){
 
 int mid= (r+l)/2;
 
 if (r>l){
 MergeSort(a,l,mid);
 // MergeSort(a,mid+1,r);
 //TwoPointer(a, l, r, mid);
 cout <<l<<" "<<r<<endl;
 }
 
 }
 */
int main(int argc, const char * argv[]) {
    int size1,size2; cin>>size1>>size2;
    int a[10000];
    int b[size1], c[size2];
    
    for (int i=0; i<size1; ++i)
        cin >>b[i];
    
    for (int i=0; i<size2; ++i)
        cin >>c[i];

    int i=0,j=0,k=0;
    
    
    while (i < size1 && j < size2){
        if (b[i]>c[j]){
            a[k]=c[j];
            j++;
        }
        else{
            a[k]=b[i];
            i++;
        }
        k++;
    }
    
    while (i<size1){
        a[k]=b[i];
        i++; k++;
    }
    while (j<size2){
        a[k]=c[j];
        j++; k++;
    }
    
    for (int i=0 ;i<size1+size2; ++i)
        cout <<a[i]<<" ";
}
