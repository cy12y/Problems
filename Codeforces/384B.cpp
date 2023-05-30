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
    int n,m,k;cin>>n>>m>>k;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>arr[i][j];
        }
    }
    vector<pii> res;
    for (int i = 0; i < m; ++i) {
        for (int j = i+1; j < m ; ++j) {
            int cnt =0;
            for (int x = 0; x < n; ++x) {
                if(k==0 && arr[x][i] > arr[x][j]){
                    swap(arr[x][i],arr[x][j]);
                    cnt++;
                }
                else if(k==1&& arr[x][i] < arr[x][j]){
                    swap(arr[x][i],arr[x][j]);
                    cnt++;
                }
            }
            if(cnt >0 && k==0){
                res.push_back({i+1,j+1});
            }
            else if(cnt > 0&& k==1){
                res.push_back({j+1,i+1});
            }
        }
    }
    cout<<res.size()<<endl;
    for(pii it :res){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

