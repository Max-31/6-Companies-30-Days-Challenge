#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}

class solution{
public:
    vector<int> findTwoElement(vector<int> v, int n) {
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            m[v[i]]++;
        }

        vector<int> ans;
        // for(auto it: m){
        //     if(it.second == 2) {
        //         ans.push_back(it.first);
        //         break;
        //     } 
        // }
        for(int i=1; i<=n; i++){
            if(m[i] == 2) {
                ans.push_back(i);
                break;
            } 
        }
        for(int i=1; i<=n; i++){
            if(m[i] == 0) {
                ans.push_back(i);
                break;
            } 
        }

        return ans;
    }
};


int main(){
fastIO();
    // tc{
        int n;
        cin>>n;
        vector<int> arr; int x;
        for(int i=0;i<n;i++){
            cin>>x; 
            arr.push_back(x);
        }

        solution ob;
        auto ans= ob.findTwoElement(arr, n);
        cout<<ans[0]<<" "<<ans[1];

    // }
    return 0;
}