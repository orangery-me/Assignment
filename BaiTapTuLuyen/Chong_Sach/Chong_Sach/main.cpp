#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}
int main(){
    int a[5],b[5];
    map <int, int> mp;
    for (int i=0; i<5; ++i){
        cin >>a[i];
        b[i]=a[i];
        mp[ a[i] ]=i;
    }
    sort(b,b+5,cmp);
    
    int count=0;
    int dau=0;
    for (int i=1; i< 5; ++i){
        // check that if the bigger book is on the smaller one or not
        if (mp [ b[i-1] ] <mp[ b[i] ]){
            count++; // put on top
            mp[ b[i]] =--dau; // change the index to the smallest
        }
    }
    cout<< count;
}
