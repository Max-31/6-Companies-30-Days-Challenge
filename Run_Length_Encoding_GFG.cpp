#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}

string encode(string src){     
    int n= src.length();
    int count=1;
    string s;
    if(n==1){
        s.push_back(src[0]);
        s.push_back('1');
        return s;
    }

    s.push_back(src[0]);
    for(int i=1; i<n; i++){
        if(src[i-1]==src[i]) count++;

        else if(src[i-1]!=src[i]){
            s.push_back(char('0' + count));
            s.push_back(src[i]);
            count=1;
        }

        if(i==n-1){
            s.push_back(char('0' + count));
            count=1;
        }
    }
    return s;
}     

int main(){
fastIO();
    // tc{
        string s;
        cin>>s;

        string ans= encode(s);
        cout<<endl<< ans;
    // }
    return 0;
}