#include <iostream>
#include <vector>
using namespace std;
 
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int *demA= new int[ransomNote.size()];
        int *demB= new int[magazine.size()];
        
        memset(demA,0,sizeof(demA));
        memset(demB,0,sizeof(demB));
        
        for (char it: ransomNote){
            demA[it]++;
            cout <<demA[it]<<" ";
        }
        
        for (char it:magazine )
            demB[it]++;

        for (char it: ransomNote){
            cout <<demA[it]<<endl;
           if (demA[it] > demB[it])
           return false;
        }
        return true;
    }
};

int main(){
    string ransomNote, magazine;
    Solution p;
    getline(cin,ransomNote);
    getline(cin,magazine);

    cout <<p.canConstruct(ransomNote,magazine);
}
