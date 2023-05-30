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
   int n;cin>>n;
   VI v(n);
    for (int i = 0; i < n; ++i) {
       cin>>v[i];
    }
    int m;cin>>m;
    while(m--){
        int q;cin>>q;
        auto ll = lower_bound(v.begin(),v.end(),q)-v.begin();
       // int ll = v[l-v.begin()-1];
        auto uu = upper_bound(v.begin(),v.end(),q)-v.begin();
        //int uu = v[u-v.begin()];
        if (ll - 1 <= v.size() - 1) cout << v[ll - 1] <<" ";
        else cout << "X"<<" ";
        if (uu <= v.size() - 1)
        cout << v[uu] << endl;
        else cout << "X" <<endl;
    }

    return 0;
}
