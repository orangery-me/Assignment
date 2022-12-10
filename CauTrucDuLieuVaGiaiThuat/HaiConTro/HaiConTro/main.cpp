#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    vector <int> c;
    
    for (int i=0; i<n; ++i)
        cin >>a[i];
    for (int i=0; i<m; ++i)
        cin >>b[i];
    
    int i=0,j=0;
    while (i<n || j<m){
        if (i==n){
            c.push_back(b[j]);
            j++;
        }
        if (j==m){
            c.push_back(a[i]);
            i++;
        }
        if (a[i] <b[j]){
            c.push_back(a[i]);
            i++;
        }
        if (a[i] >= b[j]){
            c.push_back(b[j]);
            j++;
        }
        
    }
    
    for (int item:c)
        cout <<item<<" ";

}
