#include <iostream>
#include <cmath>
using namespace std;

bool check(int x){
    if (x<2) return false;
    for (int i=2; i<=sqrt(x); ++i){
        if (x%i==0) return false;
    }
    return true;
}
int main(){
    int n; cin >>n;
    int a[n];
    
    for (int i=0; i<n; ++i){
        cin >>a[i];
    }
    for (int i=0; i<n; ++i){
        if (check(a[i])==true) cout <<a[i]<<" ";
    }
}
