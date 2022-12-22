#include <iostream>
#define MAX 1000000
using namespace std;

int a[MAX];
int main(){
    int n,s; cin>>n>>s;
    for (int i=1; i<=n; ++i){
        cin >>a[i];
    }
    int l=1, r=1, sum=a[1],ans=0;
    for (int i=1; i<=n; ++i){
        
        while (sum>s) {
            sum-=a[l];
            l++;
        }
        if (r-l+1 > ans) ans=r-l+1;
        r++;
        sum+=a[r];

    }
    cout <<ans<<endl;
}
