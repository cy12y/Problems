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
int dfs(int node ,int parent, vector<pair<int,int>> adj[],long long &ans,int n){
    int curSize = 1;
    for(auto p : adj[node]){
        int v = p.first;
        int wt = p.second;
        if(v==parent) {
            continue;
        }
        int childSize= dfs(v,node,adj,ans,n);
        ans += (2*min(childSize,n - childSize)*wt);
        curSize+=childSize;
    }
    return curSize;
}
int32_t main() {
  Anas();
  int t;cin>>t;
    int n,u,v,w;
  vector<pair<int,int>> adj[100005];
  for(int tc = 1;tc<=t;tc++){
      cin>>n;
      for(int i=1; i<=n; i++){
          adj[i].clear();
      }
      for (int i = 1; i < n ; ++i) {
          cin>>u>>v>>w;
          adj[u].push_back({v,w});
          adj[v].push_back({u,w});
      }
      long long ans=0;
      dfs(1,-1,adj,ans,n);
      cout<<"Case #"<<tc<<": "<<ans<<endl;
  }
    return 0;
}
