#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Anas() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef vector<char> VC;
typedef vector<VC> VVC;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef pair<int,int> pii;
string steps ="IEHOVA#";
int n,m;
vector<string> res;
bool pos_ok(int i, int j) {
    return i >= 0 and i < n and j >= 0 and j < m;
}
void solve(int i,int j, int step,VVC &v){
   if(v[i][j]=='#') return;

    //right
    if(pos_ok(i,j+1)&&v[i][j+1]==steps[step]){
       res.push_back("right");
        solve(i,j+1,step+1,v);
    }
    //left
    else if(pos_ok(i,j-1)&&v[i][j-1]==steps[step]){

        res.push_back("left");
        solve(i,j-1,step+1,v);
    }
    else if(pos_ok(i-1,j)&&v[i-1][j]==steps[step]){

        res.push_back("forth");
        solve(i-1,j,step+1,v);
    }

}
int32_t main() {
    Anas();
    int tc;cin>>tc;
    while(tc--){
       res.clear();
        cin>>n>>m;
        pii start;
        VVC v(n,VC(m));
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cin>>v[i][j];
                if(v[i][j]=='@') start={i,j};
            }
        }
//        for (int i = 0; i < n; ++i){
//            for (int j = 0; j < m; ++j){
//                cout<<v[i][j];
//            }
//            cout<<endl;
//        }
        solve(start.first,start.second,0,v);
        for (int i = 0; i < res.size(); ++i) {
            if(i+1==res.size()) cout<<res[i]<<endl;
            else cout<<res[i]<<" ";
        }
            
    }
    return 0;
}
