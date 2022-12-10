#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int findSquareSide(vector <int> x, vector<int> y){
    return
    min( pow(x[0]-x[1],2)+pow(y[0]-y[1],2) , pow(x[0]-x[2],2)+pow(y[0]-y[2],2) );
        
}
                 
int main(){
        vector <int> x={0,1,0,1};
        vector <int> y={0,1,1,0};
        cout<<findSquareSide(x,y)<<endl;
    }
