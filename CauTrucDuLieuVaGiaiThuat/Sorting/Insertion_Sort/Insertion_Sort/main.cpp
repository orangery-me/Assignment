//
//  main.cpp
//  Insertion_Sort
//
//  Created by Đinh Bảo Châu Thi on 12/18/22.
//

#include <iostream>

using namespace std;

int n;
int a[1000];

void input(){
    cin >>n;
    for (int i=0; i<n; ++i)
        cin >>a[i];
}
void InsertSort(){
    for (int i=0; i<n; ++i){
        int value= a[i];
        int index=i;
        while (index >0 && a[index-1] > value){
            a[index]=a[index-1];
            index--;
        }
        a[index]=value;
    }
}

void output(){
    for (int i=0; i<n; ++i)
        cout <<a[i]<<" ";
}
int main(int argc, const char * argv[]) {
    input();
    InsertSort();
    output();
}
