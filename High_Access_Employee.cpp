#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}

class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& v) {
        int c=0;
        vector<string> x; vector <int> p; set <string> s;
        
        // for(int i=0; i<v.size(); i++){   
            for(int j=0; j<v.size(); j++){
                p.clear();
                p.push_back(stoi(v[j][1]));
                for(int k=j+1; k<v.size(); k++){
                    
                    if(v[j][0]==v[k][0]){
                        p.push_back(stoi(v[k][1]));
                        
                    }
                    
                }
                c=0;
                if (p.size() >= 2) {
                    sort(p.begin(), p.end());
                    int y= 0;;
                    for(int m=0; m<p.size()-1; m++){
                        // int y= (p[m+1])- (p[m]);
                        //cout<<p[m]<<endl;
                        if(c==2){
                            break;
                        }
                        if( (p[m+1])- (p[y]) <100){
                            c++;
                        }
                        else{
                            y++;
                        }
                    }

                    if(c>=2){
                        s.insert(v[j][0]);
                    }
                }
                
            }
        
        for (auto i : s) {
            x.push_back(i);
        }
        // }
        return x;
        
    }
};

int main(){
fastIO();
    //driver code
    return 0;
}