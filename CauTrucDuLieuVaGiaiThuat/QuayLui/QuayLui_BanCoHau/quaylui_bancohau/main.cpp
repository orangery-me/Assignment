#include <iostream>

using namespace std;

/*int cot[20],sum[20],diff[20];

bool checkcot(int i, int j, int cot[]){
    
    for (int t=1; t<=i-1; ++t){
        if (j==cot[t]){
            return false;
        }
    }
    return true;
}

bool checkcheo(int i, int j, int sum[], int diff[]){
    
    for (int t=1; t<=i-1; ++t){
        if (i+j==sum[t] || i-j==diff[t]){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    do {
    cout <<"nhap n:";
    cin>>n;
        
    }
    while (n<=3);
    int i=1,j=1;
    while (i<=n){
        while (j<=n+1){
            
            if (j==n+1){
                i--;
                j=cot[i]+1;
                break;
            }
            else{
                if (checkcot(i,j,cot) && checkcheo(i,j,sum,diff)){
                    cot[i]=j;
                    sum[i]=i+j;
                    diff[i]=i-j;
                    i++;
                    j=1;
                    break;
                }
                
                else j++;
            }
        }
    }
    for (int i=1; i<=n; ++i){
        cout <<i<<" "<<cot[i]<<endl;
    }
}
*/

int main(){
    int x;
    cin>>x;
    float t=1, S1=0, epsilon;
    cin>>epsilon;
    int i=1;
    while (t>=epsilon){
        S1+=t;
        t*=(float)x/i;
        ++i;
    }
    cout <<S1<<endl;
}
