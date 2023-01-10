#include <iostream>
#include <cmath>

typedef long long  ll;
using namespace std;

bool sang(ll n){
    int nsize= pow(n,(float)1/3);
    int mark[nsize];
    
    mark[0]=0;
    mark[1]=0;
    // cho tat ca cac phan tu deu la so nguyen to
    for (ll i=2; i<= nsize; ++i)
        mark[i]=1;
    
    // sang erothenes -> tim cac so nguyen to tu 1 den nsize
    for (int i=2; i*i<=nsize; ++i){
        // tim so nguyen to
        if (mark[i] ==1)
            // loai bo cac hop so la uoc cua i
            for (int j=2; i*j<= nsize; ++j)
                mark[i*j]=0;
    }
        
    for (int k=2; k <=nsize; k++)
        if (mark[k]==1 && ( (n% k)==0 ) && (n% (ll)(k*k*k))==0 ){
           // cout <<k<<endl;
            return true;
        }
    
    return false;


}

int main(int argc, const char * argv[]) {
    ll n;
    cin >>n;
    if (sang(n)==true)
        cout <<"YES";
    else
        cout <<"NO";
}
