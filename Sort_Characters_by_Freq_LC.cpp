#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string str) {
        string a;

        unordered_map<char, int> m;
        int n= str.length();

        for(int i=0; i<n; i++){
            m[str[i]]++;
        }

        set<pair<int, char>> s;
        for(auto it: m){
            pair<int, char> p;
            p.first= it.second;
            p.second= it.first;
            s.insert(p);
        }

        // for(auto it= s.begin(); it!=s.end(); it++) cout<<(it->first)<<"-"<<(it->second)<<" ";
        // cout<<endl;

        for(auto it= s.begin(); it!=s.end(); it++){
            int num= it->first;
            while(num--){
                a.push_back(it->second);
            }
        }
        reverse(a.begin(), a.end());

        return a;
    }
};