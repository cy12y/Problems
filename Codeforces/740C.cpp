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
    int n,m;cin>>n>>m;
    int mex = INT_MAX;
    while(m--){
        int l,r;cin>>r>>l;
        mex = min(mex,l-r+1);

    }
    cout<<mex<<endl;
   int ans=0;
    for (int i = 0; i < n; ++i) {
        cout<<ans++<<" ";
        if(ans==mex) ans=0;
    }
}

