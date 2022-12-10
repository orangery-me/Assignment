#include <iostream>
#include <vector>

using namespace std;

int binary(int l, int r, vector <int> a,int k){
    int res=(l+r)/2;
    int sum=0;
    
    if (r-l==0)
        return r;
    else{
            for (int i=0; i<a.size(); ++i)
                sum+=res/a[i];
            
            if (sum < k)
                return binary(res+1,r,a,k);
            else
                return binary(l,res,a,k);
            
        }
        
}
int main(){
    int n,k,number;
    vector <int> a;
    
    cin>>n>>k;
    for (int i=0; i<n; ++i){
        cin >>number;
        a.push_back(number);
    }
    
    sort(a.begin(),a.end());
    int MaxValue=a[n-1]*k;
    cout<<binary(1,MaxValue,a,k)<<endl;
}
