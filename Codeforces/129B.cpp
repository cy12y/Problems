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
int arr[110][110];
int n;

void clean(vector<int> &v){
   for(int it : v){
       for (int i = 1; i <= n; ++i) {
           arr[it][i]=arr[i][it]=0;
       }
   }
}
int32_t main(){
    Anas();
    int e;cin>>n>>e;
    for (int i = 0; i < e; ++i) {
        int x,y;cin>>x>>y;
        arr[x][y]= 1;
        arr[y][x]=1;
    }
    int res =0;
    while(true){

        vector<int> v;
        for (int i = 1; i <= n ; ++i) {
            int cnt =0;
            for (int j = 1; j <= n; ++j) {
                if(arr[i][j]==1) cnt++;
            }
            if(cnt == 1) v.push_back(i);
        }
        if(v.size()>0) res++;
        else break;
        clean(v);
    }
    cout<<res<<endl;
    return 0;
}
