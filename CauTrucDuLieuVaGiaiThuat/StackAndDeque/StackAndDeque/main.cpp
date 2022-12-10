/*
 #include <iostream>
 #include <stack>
 
 using namespace std;
 int main(){
 string Input;
 stack <char> st;
 string Output;
 
 getline(cin,Input);
 int i=0;
 while (i<=Input.size()){
 
 if (st.size()==0 || Input[i]==st.top()){
 st.push(Input[i]);
 i++;
 }
 
 else{
 cout <<st.top()<<st.size();
 while (st.size()!=0)
 st.pop();
 }
 }
 
 }
 
 
 
 #include <iostream>
 #include <cmath>
 #include <queue>
 
 using namespace std;
 
 bool PrimeCheck(int n){
 for (int i=2; i<=sqrt(n); ++i){
 if (n%i==0) return false;
 
 }
 return true;
 }
 
 int main(){
 
 int n; cin>>n;
 queue<int> q;
 
 for (int i=2; i<=10; ++i){
 if (PrimeCheck(i)==true){
 cout <<i<<" ";
 q.push(i);
 }
 }
 
 while ( q.empty()==false ){
 for (int j=1; j<=9; j+=2){
 
 int number=q.front()*10+j;
 if (number >n) break;
 if (number <n && PrimeCheck(number)==true){
 
 q.push(number);
 cout <<number<<" ";
 }
 
 }
 q.pop();
 
 }
 
 }
 */

#include <iostream>
#include <queue>

using namespace std;

bool CheckNumberOccur(queue <int> q, int n){
    while (q.empty()==false){
        if (q.front()==n) return true;
        q.pop();
    }
    return false;
}

int main(){
    int n,k;
    int a[100];
    queue <int> q;
    
    cin>>n;
    for (int i=0; i<n; ++i){
        cin>>a[i];
    }
    cin>>k;
    
    for (int i=0; i<n; ++i){
        
        if (CheckNumberOccur(q,a[i])==false){
            q.push(a[i]);
            if (q.size()>k) q.pop();
        }
    }
    
    while (q.empty()==false){
        cout <<q.front()<<" ";
        q.pop();
    }

}
