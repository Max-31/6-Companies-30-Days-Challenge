#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& v) {
        sort(v.begin(), v.end());

        int pos= v.size() / 2;
        int sum= 0;
        for(int i=0; i<pos; i++){
            sum+= v[pos] - v[i];
        }
        for(int i=pos; i<v.size(); i++){
            sum+= v[i] - v[pos];
        }

        return sum;
    }
};