#include <iostream>
#include <vector>
using namespace std;

int a[101][101];
int dp[101][101];
int m,n;

int tim(int sx,int sy, int ex, int ey){
    memset(dp,0,sizeof(dp));
    for (int i=sx; i<= ex ;++i){
        for (int j= sy; j<= ey; ++j)
            // the start cell is 0
            if (i==sx && j==sy)
                dp[i][j]=0;
            else{
                if (i==sx)
                    dp[i][j]= a[i][j] + dp[i][j-1];
                
                else{
                    if (j==sy)
                        dp[i][j]= a[i][j] +dp[i-1][j];
                    else
                        dp[i][j] = a[i][j] + min( dp[i-1][j], dp[i][j-1] );
                }
            }
    }
     return dp[ex][ey];
}

int main(int argc, const char * argv[]) {
    cin>>m>>n;
    for (int i=1; i<=m ;++i)
        for (int j=1; j<=n; ++j){
            cin >>a[i][j];
        }
    
    int q; cin>>q;
    vector <int> res;
    for (int i=1; i<=q ; ++i){
        int x,y,z,t;
        cin >>x>>y>>z>>t;
        res.push_back(tim(x,y,z,t));
    }
    
    for (int it:res)
        cout<<it<<endl;
    
    
}
