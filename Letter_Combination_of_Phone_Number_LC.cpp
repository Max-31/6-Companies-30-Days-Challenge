#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}

class Solution {
public:
    vector <string> func(string& s){
        string p;
        vector<string>v;

        for(int i=0; i<s.length(); i++){
            p.push_back(s[i]);
            v.push_back(p);
            p="";
        }

        return v;
    }

    vector <string> func(string& s1, string& s2){
        string s;
        vector<string> v;

        for(int i=0; i<s1.length(); i++){
            for(int j=0; j<s2.length(); j++){
                s.push_back(s1[i]);
                s.push_back(s2[j]);
                v.push_back(s);
                s = "";
            }
        }

        return v;
    }

    vector <string> func(string& s1, string& s2, string& s3){
        string s;
        vector<string> v;

        for(int i=0; i<s1.length(); i++){
            for(int j=0; j<s2.length(); j++){
                for(int k=0; k<s3.length(); k++){
                    s.push_back(s1[i]);
                    s.push_back(s2[j]);
                    s.push_back(s3[k]);
                    v.push_back(s);
                    s = "";
                }
            }
        }

        return v;
    }

    vector <string> func(string& s1, string& s2, string& s3, string& s4){
        string s;
        vector<string> v;

        for(int i=0; i<s1.length(); i++){
            for(int j=0; j<s2.length(); j++){
                for(int k=0; k<s3.length(); k++){
                    for(int l=0; l<s4.length(); l++){
                        s.push_back(s1[i]);
                        s.push_back(s2[j]);
                        s.push_back(s3[k]);
                        s.push_back(s4[l]);
                        v.push_back(s);
                        s = "";
                    }
                }
            }
        }

        return v;
    }

    vector<string> letterCombinations(string d) {
        int n= d.length();

        unordered_map<char, string> m;
        m['2']= "abc"; m['3']="def"; 
        m['4']= "ghi"; m['5']= "jkl"; m['6']= "mno";
        m['7']= "pqrs"; m['8']="tuv"; m['9']= "wxyz";

        if(d== ""){
            vector<string> v1;
            return v1;
        }

        if(n==1){
            string s= m[d[0]];
            vector <string> ans= func(s);
            return ans;
        }
        else if(n==2){
            string s1= m[d[0]];
            string s2= m[d[1]];
            vector <string> ans= func(s1, s2);
            return ans;
        }
        else if(n==3){
            string s1= m[d[0]];
            string s2= m[d[1]];
            string s3= m[d[2]];
            vector <string> ans= func(s1, s2, s3);
            return ans;
        }
        else if(n==4){
            string s1= m[d[0]];
            string s2= m[d[1]];
            string s3= m[d[2]];
            string s4= m[d[3]];
            vector <string> ans= func(s1, s2, s3, s4);
            return ans;
        }
        vector<string>dummy;
        return dummy;
    }
};

int main(){
    //driver code
}