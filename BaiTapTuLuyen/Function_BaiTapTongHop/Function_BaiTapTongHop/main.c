//
//  main.c
//  Function_BaiTapTongHop
//
//  Created by Đinh Bảo Châu Thi on 12/17/22.
//
/*
#include <stdio.h>

long long GiaiThua(int n){
    if (n==0) return 1;
    else
        return n*GiaiThua(n-1);
}

long long TongGiaiThua(int n){
    
    long long sum=0;
    for (int i=1; i<=n; ++i)
        sum+=GiaiThua(i);
    return sum;
}

int SoFibonacci (int n){
    if (n==1 || n==2) return 1;
    else
        return SoFibonacci(n-1)+ SoFibonacci(n-2);
}

void DayFibonacci (int n){
    int s1=0,s2=1,res=1;
    for (int i=1; i<=n; ++i){
        printf("%5d",res);
        res=s1+s2;
        s1=s2;
        s2=res;
    }
}

int main() {
    int c,n;
    do{
        
        printf ("1. Tinh giai thua cua n \n");
        printf ("2. Tinh tong cac giai thua tu 1 den n \n");
        printf ("3. In ra so fibonacci thu n \n");
        printf ("4. In day so fibonacci tu 1 den n \n");
        printf ("5. Thoat chuong trinh \n");
        printf ("------------------------------------ \n");
        printf ("Chon phep toan muon thuc hien: ");
        scanf ("%d", &c);
        if (c!=5){
            printf("n = ");
            scanf ("%d", &n);
        }
        switch (c){
            case 1:
                printf("%lld \n", GiaiThua(n));
                break;
            case 2:
                printf("%lld \n", TongGiaiThua(n));
                break;
            case 3:
                printf("%d \n", SoFibonacci(n));
                break;
            case 4:
                DayFibonacci(n);
                printf("\n");
                break;
        }
    }
    while (c!=5);
        
}
*/

#include <stdio.h>

void sapXep(int a[], int n){
    for (int i=0; i<n; ++i)
        for (int j=i; j>0; j--)
            if (a[j] < a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
    
}

void DaoDay(int a[], int n){
    for (int i=0; i< n/2; ++i){
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}

void Chuyen(int a[], int n){
    for (int i=0; i<n; ++i)
        for (int j=i; j>0; --j)
            if ( a[j] %2 !=0 && a[j-1]%2 ==0){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
    
}

void Chen(int a[], int n, int z){
    
    int index=0;
    while (a[index] <z && index<n)
        index++;
    
    for (int i=n; i>=index+1; i--)
        a[i]=a[i-1];
     
    a[index]=z;
    
}
int main(){
    int n; scanf("%d", &n);
    int a[1000];
    
    for (int i=0; i<n; ++i)
        scanf("%d", &a[i]);
    sapXep(a, n);
  //DaoDay(a, n);
   // Chuyen(a,n);
    int m; scanf("%d", &m);
    int b[1000];
    for (int i=0; i<m; ++i){
        scanf("%d", &b[i]);
        Chen(a,n+i,b[i]);

    }
        
    for (int i=0; i<n+m; ++i)
       printf("%d ", a[i]);
}
