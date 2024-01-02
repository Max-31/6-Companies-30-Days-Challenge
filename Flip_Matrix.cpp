#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> v;
    int n,m;
    int i = 0,j = 0;
    Solution(int m, int n) {
        this->n = n;
        this->m = m;
    }
    
    vector<int> flip() {
        if(i+1 < m) i++;
        else if(j+1 <n){
            j++;
            i=0;
        }
        else {
            i=0; j=0;
        }

        return {i, j};

    }
    
    void reset() {
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */