#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n= nums.size();
        int ind=0, lim= n-1;
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                ind=i;
                break;
            }
            else{
                ind= i;
            }
        }
        if(ind==n-1){
            return -1;
        }



        std::deque<int> dec_q;
        // int n = nums.size();
        std::vector<int> dp(n, 0);

    for (int i = 0; i < n; i++) {
        if (i > k && !dec_q.empty() && dec_q.front() == dp[i - k - 1]) {
            dec_q.pop_front();
        }
        dp[i] = std::max(dec_q.empty() ? 0 : dec_q.front(), 0) + nums[i];

        while (!dec_q.empty() && dec_q.back() < dp[i]) {
            dec_q.pop_back();
        }

        dec_q.push_back(dp[i]);
    }

    int maxResult = *std::max_element(dp.begin(), dp.end());
    return std::max(maxResult, 0);

    }
};