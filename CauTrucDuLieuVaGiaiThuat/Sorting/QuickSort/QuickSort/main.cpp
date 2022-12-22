//
//  main.cpp
//  QuickSort
//
//  Created by Đinh Bảo Châu Thi on 12/20/22.
//

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp= a;
    a=b;
    b=temp;
}

// Ham phan manh
int Partition(int a[], int Left, int Right){
    int l=Left, r=Right;
    //Chon pivot la phan tu dau tien
    int pivot=a[Left];
    // Dua cac phan tu lon hon pivot sang phai, nho hon pivot sang trai
    while (l<r){
        // Bo qua cac phan tu o ben phai lon hon pivot
        while (r>l && a[r] >=pivot)
            r--;
        // Swap khi gap phan tu o ben phai nho hon pivot
        swap(a[l], a[r]);
        
        //Bo qua cac phan tu o ben trai nho hon pivot
        while (r>l && a[l] <= pivot)
            l++;
        //Swap khi gap phan tu o ben trai lon hon pivot
        swap(a[l],a[r]);
    }
// Tra ve gia tri khi left gap right
    return l;
}

void QuickSort(int a[], int Left, int Right){
    
    if (Left <Right){
        int p= Partition(a, Left, Right);
        QuickSort(a, Left, p-1);
        QuickSort(a, p+1, Right);
    }
}

int main(int argc, const char * argv[]) {
    int a[100000];
    int n; cin>>n;
    
    for (int i=0; i<n; ++i)
        cin >>a[i];
    
    QuickSort(a, 0, n-1);
    
    for (int i=0; i<n; ++i)
        cout <<a[i]<<" ";
    
}
