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
  int sum[200005],res[200005];
   int n,m,q;cin>>n>>m>>q;
    ::memset(sum,0,sizeof(sum));
   // ::memset(res,0, sizeof(res));
    while(n--){
        int a,b;cin>>a>>b;
        sum[a]++;
        sum[b+1]--;
    }
    for (int i = 1; i < 200005; ++i) {
        sum[i]=sum[i]+sum[i-1];
    }
    for (int i = 0; i < 200005; ++i) {
        if(sum[i]>=m) res[i]=1;
        else res[i]=0;
    }
    for (int i = 1; i < 200005; ++i) {
        res[i]=res[i]+res[i-1];
    }
    while(q--){
        int l,r;cin>>l>>r;
        cout<<res[r]-res[l-1]<<endl;
    }
}

