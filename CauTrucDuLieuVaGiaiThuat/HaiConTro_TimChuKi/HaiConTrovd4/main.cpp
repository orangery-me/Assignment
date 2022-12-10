//
//  main.cpp
//  HaiConTrovd4: Bai toan tim chu ki (Floyd's Tortoise and Hare)
//
//  Created by Đinh Bảo Châu Thi on 12/9/22.
//

#include <iostream>
using namespace std;

long long a,b,c;
long long f(long long x){
    return (a*x+x%b)%c;
}

int main() {
    cin >>a>>b>>c;
    
    long long slow=1,fast=1;
    do{
        slow=f(slow);
        fast=f(f(fast));
    }
    while (slow!=fast);
    
    slow=1;
    int count=0;
    while (slow !=fast){
        slow=f(slow);
        fast=f(fast);
        count++;
    }
    
    do{
        slow=f(slow);
        count++;
    }
    while (slow!=fast);
        
        cout <<count<<endl;
}
