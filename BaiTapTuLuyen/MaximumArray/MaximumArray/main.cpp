//
//  main.cpp
//  MaximumArray
//
//  Created by Đinh Bảo Châu Thi on 12/30/22.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=nums[0];
        int best=nums[0];
        for (int i=1; i< nums.size(); ++i){
            if (s<0) s=0;
            s=s+nums[i];
            best=max(best,s);
        }
        return best;
    }
};
int main(int argc, const char * argv[]) {
    int n; cin>>n;
    vector <int> nums;
    for (int i=0; i<n; ++i){
        int x; cin>>x;
        nums.push_back(x);
    }
    Solution p;
    cout <<p.maxSubArray(nums);
    return 0;
}
