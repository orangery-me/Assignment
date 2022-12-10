#include <iostream>
#include <vector>
using namespace std;
int a[1000000];

int main(int argc, const char * argv[]) {
    int n,x; cin>>n>>x;
    
    for (int i=1; i<=n; ++i)
        cin >>a[i];
    
    int i=1,j=n,count=0;
    while (i < j){
        
        if (a[i]+a[j]==x){
            cout <<i<<" "<<j<<endl;
            count++;
            
            if ( (a[i+1]!=a[i]) && (a[j-1]!=a[j]) ){
                i++;
                j--;
            }
            if (a[i+1]==a[i]) {
                i++;
                continue;}
            if (a[j-1]==a[j]) {
                j--;
                continue;}
                
        }
        else{
            if (a[i]+a[j] > x)
                j--;
            else
                i++;
        }
    }
    cout <<count<<endl;
}
