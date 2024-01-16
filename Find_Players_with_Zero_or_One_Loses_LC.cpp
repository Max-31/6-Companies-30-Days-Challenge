#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n= matches.size();

        if(n==1) return {{matches[0][0]},{matches[0][1]}};
        
        unordered_map<int,int>m;
        set<int>s;

        for(int i=0; i<n; i++){
            m[matches[i][1]]++;

            s.insert(matches[i][0]);
            s.insert(matches[i][1]);
        }
        
        vector<int> win, lose;
        for(auto it= s.begin(); it!=s.end(); it++){
            if(m[*it]==0){
                win.push_back(*it);
            }
            else if(m[*it]==1){
                lose.push_back(*it);
            }
        }

        vector<vector<int>> ans;
        ans.push_back(win);
        ans.push_back(lose);

        return ans;

    }
};