#include<bits/stdc++.h>
using namespace std;
#define pair_i pair<string,int>

class comp{
    public:
    bool operator() (const pair_i &ax1,const pair_i &by2) const{
        if(ax1.first.size() == by2.first.size()){ 
            if(ax1.first == by2.first){
                return ax1.second < by2.second;
            }
            return ax1.first < by2.first;
        }
        return ax1.first.size() < by2.first.size();

    }
};
class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& number_string, vector<vector<int>>& queries) {
        vector<int> ans;

        for(auto query: queries){
            int k = query[0]; 
            int final_len = query[1]; 
            
            priority_queue<pair_i,vector<pair_i>,comp> pq;
            for(int i = 0; i < number_string.size(); i++){
                string num = number_string[i];
                string trimmed_num = num.substr(num.size() - final_len); 
                pq.push({trimmed_num,i}); 
            }
            
            
            while(pq.size() > k){
                pq.pop();
            }
            string kSmallestNum = pq.top().first; 
            int idx = pq.top().second;

            
            while(pq.size() > 0 && pq.top().first == kSmallestNum && pq.top().second < idx){
                idx = pq.top().second;
                pq.pop();
            }

            ans.push_back(idx);
        }
        return ans;
    }
};