#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector <int> ChangeToBits(int n){
    vector <int> res;    
    while (n>0){
        res.push_back(n%2);
        n=n/2;
    }
    return res;
    
}
int groupedBits(int n){
    vector <int> res=ChangeToBits(n);
    int count=0;
    for (int i=0; i<res.size();++i){
        if (res[i]==1){
            if (res[i+1]==0 || i==res.size()-1)
                count++;
        }
    }
    return count++;
}
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> res;
    ChangeToBits(n);
    cout <<groupedBits(n)<<endl;
}
