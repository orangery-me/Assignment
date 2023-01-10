
#include <iostream>
#include <set>

using namespace std;
typedef long long ll;

const int nmax=201;
bool isPrime(ll n){
    for (ll i=2; i*i <=n; ++i)
        if (n %i ==0)
            return false;
    return n>1;
}
int dem(ll a[][nmax], int n){
    set <int> st;
    
    for (int i=0; i<=n; ++i){
        if ( isPrime( a[i][i]) == true)
            st.insert( a[i][i] );
    }
    
    for (int i=0; i<=n; ++i){
        if ( isPrime(a[i][n-i-1]) ==true)
            st.insert( a[i][n-i-1] );
        
    }
    
    
    return st.size();
    
}

int main(int argc, const char * argv[]) {
    int n; cin>>n;
    ll a[nmax][nmax];
    
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            cin >>a[i][j];
    
    cout <<dem(a,n);
    return 0;
}
