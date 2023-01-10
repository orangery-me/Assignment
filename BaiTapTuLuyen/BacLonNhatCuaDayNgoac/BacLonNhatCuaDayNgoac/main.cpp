#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    getline(cin,s);
    int rank[20]={};
    stack <char> st;
    
    st.push(s[0]);
    rank[0]=0;
    int i=1;
    // find the ranks
    while (i< s.size() ){
        if (s[i]==')'){
            st.pop();
            rank[i]=rank[i-1]+1;
        }
        else{
            st.push(s[i]);
            rank[i]=0;
        }
        i++;
    }
    // find the max rank
    int max=rank[0];
    for (int i=0; i<20; ++i){
        if (rank[i] >max)
            max=rank[i];
    }
    cout <<max;
    
}
