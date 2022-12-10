#include <iostream>
#include <string>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    string s1,s2;
    cin >>s1;
    cin >>s2;
    s1=" "+s1;
    s2=" "+s2;
    for (int i=1; i <= s1.size() - s2.size()+1; ++i){
        bool check=true;
        for (int j=i,t=1; j<=s2.size()+i-1 ; ++j,++t)
            if (s1[j]!=s2[t]){
                check=false;
                break;
            }
        if (check==true)
            cout<<i<<endl;
    }
}

/*const int base=31;
ll MOD= 10000007;
ll HashS1[100000],Pow[100000];
ll HashS2=0;

ll getHash(int i, int j){
    return (HashS1[j]- HashS1[i-1]*Pow[j-i+1]  +MOD*MOD )%MOD;
}

int main(){
    string s1,s2;
    cin >>s1>>s2;
    int n=s1.length(), m=s2.length();
    s1=" "+s1;
    s2=" "+s2;
    Pow[0]=1;
    for (int i=1; i<=n; ++i){
        Pow[i]=( Pow[i-1]*base )%MOD;
    }
    for(int i=1; i<=n; ++i){
        HashS1[i]=( HashS1[i-1]*base + (s1[i]-'a'+1) )% MOD;
    }
    for(int i=1; i<=m; ++i){
        HashS2=( HashS2*base+ (s2[i]-'a'+1) ) % MOD;
    }
    
    for (int i=1; i<=n-m+1; ++i){
        cout <<getHash(i, i+m-1)<<endl;
        if (HashS2==getHash(i, i+m-1))
            cout <<i<<endl;
    }
    
}
*/
