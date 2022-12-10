//
//  main.cpp
//  VOI08BAI1
//
//  Created by Đinh Bảo Châu Thi on 12/7/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,number;
    cin>>n;
    vector <int>b,c;
    for (int i=0; i<n; ++i){
        cin>>number;
        b.push_back(number);
    }
    for (int i=0; i<n; ++i){
        cin>>number;
        c.push_back(number);
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    cout <<b[0]+c[0]<<endl;
}
