#include <iostream>

using namespace std;

typedef long long ll;
int n,m;
const int nmax=1001;
int a[nmax][nmax];
ll srow[nmax][nmax];
ll scol[nmax][nmax];
ll res[500001];

void input(){
    cin >>n>>m;
    for (int i=1; i<=n; ++i)
        for (int j=1 ;j<=m; ++j)
            cin >>a[i][j];
    
    for (int i=1; i<=n; ++i)
        for (int j=1 ;j<=m; ++j)
            srow[i][j] = srow[i][j-1]+a[i][j];
            
        
    for (int j=1; j<=m; ++j)
        for (int i=1 ;i<=n; ++i)
                scol[i][j] = scol[i-1][j]+a[i][j];
}

void truyvan(){
    int q;
    cin >>q;
    for (int i=1; i<=q; ++i){
        int x,y,z,t;
        cin >>x>>y>>z>>t;
        if (x==1)
            res[i]=srow[y][t]-srow[y][z-1];
        if (x==2)
            res[i]=scol[t][y]-scol[z-1][y];
    }
    for (int i=1; i<=q; ++i){
        cout <<res[i]<<endl;
    }
}

int main() {
    input();
    truyvan();
}
