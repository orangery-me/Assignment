#include <iostream>

using namespace std;
bool mark[1000000];
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        if (mark[i] == 0)
        {
            for (int j = 2; i * j <= n; ++j)
                mark[i * j]=1;
            cout <<i<<" ";
        }
    }
}
