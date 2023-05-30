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
    int debit[n+1],ow[n+1];
    memset(debit,0,sizeof(debit));
    memset(ow,0,sizeof(ow));
    for (int i = 1; i <=m ; ++i) {
        int a,b,c;cin>>a>>b>>c;
        ow[a]+=c;
        debit[b]+=c;
    }
    int sum=0;
    for (int i = 1; i <=n; ++i) {
        if(ow[i]>debit[i]) sum+=ow[i]-debit[i];
    }
    cout<<sum;
}

