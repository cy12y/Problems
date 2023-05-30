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
int n,m;
bool valid(int i,int j){
    return i>0 and i<=n and j>0 and j<=m;
}
int32_t main(){
    Anas();
    cin>>n>>m;
    int x,y;cin>>x>>y;
    int tox,toy;
    int v;cin>>v;
    int ans =0;
    for (int i = 0; i < v; ++i) {
        cin>>tox>>toy;
        int l=0,r=1e9+7,mid;
        int steps=0;
        while(l<=r){
            mid = l+(r-l)/2;
            if(valid(x+(tox*mid),y+(toy*mid))){
                l=mid+1;
                steps=mid;
            }
            else{
                r=mid-1;
            }
        }
        x= (tox*steps)+x;
        y= (toy*steps)+y;
        ans+=steps;
    }
    cout<<ans<<endl;
    return 0;
}

