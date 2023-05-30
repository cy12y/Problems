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
int32_t main() {
    Anas();
    int t;cin>>t;
    while(t--) {
        map<int,pair<int,int>> mp;
        int n,q;cin>>n>>q;
        int c;
        for (int i = 0; i < n; ++i) {
            cin>>c;
          if(mp.find(c)==mp.end()) mp[c].first = mp[c].second = i;
          else mp[c].second = i;
        }
        int l,r;
        for (int j = 0; j < q; ++j) {
            cin>>l>>r;
            if(mp.find(l)==mp.end()|| mp.find(r)==mp.end()){
                cout<<"NO"<<endl;
                continue;
            }
            int  a= mp[l].first;
            int  b= mp[r].second;
           // int b = mp[r].second;
            if(a<=b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}