#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Anas() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef vector<char> VC;
typedef vector<int> VI;
typedef vector<VC> VVC;
typedef vector<VI> VVI;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef pair<int,int> pii;

int32_t main(){
    Anas();
    map<int,vector<int>> mp;
    int n;cin>>n;
    for(int i=1;i<=n;i++){
         int c;cin>>c;
        mp[c].push_back(i);
    }
    vector<pair<int,int>> res;
    for(auto it: mp){
         if(it.second.size()==1) res.push_back({it.first,0});
        else if(it.second.size()==2) res.push_back({it.first,it.second[1]-it.second[0]});
        else{
             int diff = it.second[1]-it.second[0];
            bool f =true;
            for (int i = 1; i < it.second.size()-1; ++i) {
                if(it.second[i+1]-it.second[i]!=diff){
                    f=false;
                    break;
                }
            }
            if(f) res.push_back({it.first,diff});

        }
    }
    cout<<res.size()<<endl;
    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i].first<<" "<<res[i].second<<endl;
    }
}

