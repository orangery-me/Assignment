//
//  main.cpp
//  LinearSearch
//
//  Created by Đinh Bảo Châu Thi on 12/11/22.
//
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n,x;
    cin>>n;
    for (int i=0; i<n; ++i)
        cin >>a[i];
    
    cin >>x;
    for (int i=0; i<n; ++i)
        if (a[i]==x ){
            cout <<i<<endl;
            return 0;
        }
    cout <<"-1";
 }
