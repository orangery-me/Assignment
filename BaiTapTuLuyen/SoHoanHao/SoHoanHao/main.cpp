//
//  main.cpp
//  SoHoanHao
//
//  Created by Đinh Bảo Châu Thi on 1/9/23.
//

#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
    if (n==0 || n==1) return false;
    
    for (ll i=2; i*i <=n; ++i){
        if (n%i==0)
            return false;
    }
    return true;
}

void sohoanhao(int a, int b){
    int i=2;
    int count=0;
    
    while ( ( pow(2,i)-1 )* pow(2,i-1) <a ){
        i++;
    }
    
    while (( pow(2,i)-1 )* pow(2,i-1) <=b){
        
        if ( isPrime(pow(2,i)-1) ==true ){
            cout <<(ll)( pow(2,i)-1 )* pow(2,i-1)<<" ";
            count++;
        }
        i++;
        
    }
    if (count==0) cout <<"-1";
}

int main(int argc, const char * argv[]) {
    int a, b;
    cin>>a>>b;
    sohoanhao(a, b);
}
