#include <stdio.h>
int main()
{
    int n;
    do
    {printf(" Hãy cho mot so > 0 :");
        scanf("%d", &n);
        if (n<0) {printf(" Xin moi cho so > 0\n");
            continue; }
        printf(" Bình phuong cua nó là : %d\n", n*n);
    }
    while(n);
    
}
