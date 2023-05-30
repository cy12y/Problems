#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Anas() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef vector<char> VC;
typedef vector<VC> VVC;
typedef vector<bool> VB;
typedef vector<VB> VVB;

const int xx[8] = {1,-1,0,0,0,1,1,1};
const int yy[8] = {0,0,1,-1,1,-1,0,1};

int n;
int ttc = 1;
bool pos_ok(int i, int j) {
    return i >= 0 and i < n and j >= 0 and j < n;
}

void dfs(VVC &v,VVB &visited,int i,int j){
    if(visited[i][j]) return;
    visited[i][j]=1;
    for (int k = 0; k < 4; ++k) {
        int ii = i+xx[k];
        int jj = j+yy[k];
        if(pos_ok(ii,jj) and !visited[ii][jj]&&(v[ii][jj]!='.' )){
            dfs(v,visited,ii,jj);
        }
    }
}

int32_t main() {
    Anas();
    int tc;cin>>tc;
    while(tc--){
        cin>>n;
       VVC v(n,vector<char> (n));
       VVB visited(n,vector<bool>(n,0));
       int cnt =0;
       for (int i = 0; i < n; ++i) for (int j = 0; j <n ; ++j) cin>>v[i][j];
       for (int i = 0; i < n; ++i) {
           for (int j = 0; j < n ; ++j) {
             if(!visited[i][j]&&v[i][j]=='x'  ){
                 dfs(v,visited,i,j);
                 cnt++;
             }
           }
       }
       cout<<"Case " <<ttc++<<": "<<cnt<<endl;
   }
}
