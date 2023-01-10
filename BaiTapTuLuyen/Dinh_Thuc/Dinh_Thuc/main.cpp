//
//  main.cpp
//  Dinh_Thuc
//
//  Created by Đinh Bảo Châu Thi on 1/9/23.
//

#include <iostream>
//#include <iomanip>
using namespace std;
float a[5][5];

void swap(float &a, float &b){
    float temp=a;
    a=b;
    b=temp;
}

void swap_hang(float c[], float b[], int n){
    for (int i=0; i<n ;++i)
        swap(c[i],b[i]);
}

void change(float a[][5], int n){
    int j=0;
    float ratio;
    // j: cot can bien doi ve 0
    while (j <n){
        // i: vi tri hang se duoc bien doi
        for (int i=j; i<n; ++i){
            // neu o (i,j) khac 0 -> bien doi
            
            if ( a[i][j] !=0 ){
                // neu i=j va a[j][j] khac 0 thi khong bien doi
                if (i==j)
                    continue;
                
                else{
                    ratio= a[i][j]/a[j][j];
                    // bien doi ca hang i theo ti so o 2 o dau tien
                    for (int k=j; k<n; ++k)
                        a[i][k] += ratio*(-a[j][k]);
                }

            }
            
            // neu o (i,j) bang 0 -> chuyen hang do xuong cuoi
            else{
                for (int k=i; k< n-1; ++k)
                    swap_hang(a[k],a[k+1],n);
            }

        }
        j++;
    }
    
}

int main(int argc, const char * argv[]) {
    int n; cin>>n;
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            cin >>a[i][j];
    
   // int count=0;
    change(a,n);
//    float det=1;
   // for (int i=0; i<n; ++i)
     //   det *= a[i][i];
    
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j)
            cout <<a[i][j]<<" ";
        cout <<endl;
    }
    /*
    if (count%2 && det !=0)
    cout <<setprecision(0)<<fixed<<-det<<endl;
    else
        cout <<setprecision(0)<<fixed<<det<<endl;
     */
    
}
