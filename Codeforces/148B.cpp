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
    int vp,vd,t,f,c;cin>>vp>>vd>>t>>f>>c;
    double dist = vp *t;
    int cnt =0;
    if(vd<=vp){
        cout<<0;return 0;
    }
    while(dist<c){
        float k = vp*dist/(vd-vp);
        dist += k;
        if(dist>=c)
            break;
        cnt++;
        dist = dist + ((dist/vd)+f)*vp;
    }
    cout<<cnt;
    return 0;
}

