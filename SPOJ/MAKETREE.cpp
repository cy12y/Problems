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
void topological_sorting(VI &topo , int node ,VVI &v, VB &vis){
    vis[node] = true;
    for(int i : v[node]){
        if(!vis[i]) topological_sorting(topo,i,v,vis);
    }
    topo.push_back(node);
}
int32_t main() {
    Anas();
    int n,m;cin>>n>>m;
    VVI v(n+1);
    VB vis(n+1,0);
    VI topo;
    VI res(n);

    for (int i = 1; i <= m; ++i) {
        int t;cin>>t;
        while(t--){
            int c;cin>>c;
            v[i].push_back(c);
        }
    }
    for (int i = 1; i <= n; ++i) {
        if(!vis[i]){
            topological_sorting(topo,i,v,vis);
        }
    }

//    for (int i = 0; i < n; ++i) {
//        cout<<topo[i]<<" ";
//    }
//    cout<<endl;
    int pos =0;
    for (int i = n-1; i >=0 ; --i) {
        int st = topo[i];
        res[st]=pos;
       // cout<<topo[i]<<" "<<pos<<endl;
        pos = st;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<res[i]<<endl;
    }
    return 0;
}
