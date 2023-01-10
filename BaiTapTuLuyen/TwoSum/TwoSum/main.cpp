#include <iostream>
#include <vector>
using namespace std;


struct dayso{
    int value;
    int index;
};
vector <dayso> input;
int n,target;


bool cmp(dayso a, dayso b){
    if (a.value < b.value)
        return true;
    return false;
}

void TwoPoint(){
    for (int i=0; i<n; ++i)
        input.push_back( {nums[i],i} );
    
    sort(input.begin(),input.end(),cmp);
    int i=0,j=n-1;
    while (i<j){
        if (input[i].value + input[j].value >target)
            j--;
        else{
            if (input[i].value + input[j].value < target)
                i++;
            else
                break;
        }
    }
    
}
int main(){
    input();
    TwoPoint();
}
