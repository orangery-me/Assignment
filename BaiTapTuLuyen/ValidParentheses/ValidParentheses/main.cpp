//
//  main.cpp
//  ValidParentheses
//
//  Created by Đinh Bảo Châu Thi on 12/29/22.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    int isValid(string s) {
        stack <char> ucv;
                
        for (int i=0; i<s.length(); ++i){
            
            if (s[i]=='(' || s[i]=='{' || s[i]=='[')
                ucv.push(s[i]);
            else{

                if ( (! ucv.empty() ) && ( ( s[i]==')' && ucv.top()=='(' ) || (s[i]==']' && ucv.top()=='[') || (s[i]=='}' && ucv.top()=='{') ) )
                    ucv.pop();
                else
                    return 0;
                    
                }
        }
        return (ucv.empty()==1) ? 1:0;
    }
};

int main(int argc, const char * argv[]) {
    Solution p;
    
    string s;
    getline(cin,s);
    cout <<endl;
    cout <<p.isValid(s);
}
