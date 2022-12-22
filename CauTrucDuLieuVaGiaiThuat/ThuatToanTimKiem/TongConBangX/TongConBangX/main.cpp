#include <iostream>
using namespace std;
long long a[1000000], s[1000000];
int main()
{
    int n;
    cin >> n;
    
    s[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    int x;
    cin >> x;
    
    int i = 0, j = 1,m=0;
    while (i <= n)
    {
        if (s[j] - s[i] == x){
            m=1;
            break;
            
        }
        if (s[j] - s[i] < x)
            j++;
        else
            i++;
    }
    if (m==0)
        cout <<"-1";
    else
        for (int t=i+1; t<=j; ++t)
            cout <<a[t]<<" ";
    
}
