#include <iostream>
using namespace std;

unsigned long long hamMu(int n, int k){
    if (k==0) return 1;
    if (k%2==0)
        return hamMu(n,k/2)*hamMu(n,k/2);
    return n*hamMu(n,(k-1)/2)*hamMu(n,(k-1)/2);
}
int main(){
    int n,k;
    cin>>n>>k;
    cout <<hamMu(n, k)<<endl;
}
