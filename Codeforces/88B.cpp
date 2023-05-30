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
vector<pii> shift;
vector<vector<pii>> posKey(26);
int k;
const int mx = 1e9+7;
int dist(int i,int j,int ii, int jj){
    return ((i-ii)*(i-ii))+((j-jj)*(j-jj));
}

bool check(int i,int j){
    for (int kk = 0; kk < shift.size(); kk++) {
        int dis = dist(i,j,shift[kk].first,shift[kk].second);
        if(dis <= k*k) return true;
    }
    return false;
}
int32_t main() {
    Anas();
    int n,m;cin>>n>>m>>k;

    vector<string> key(n);
    for (int i = 0; i < n; ++i) {
        cin>>key[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(key[i][j]=='S')
                shift.push_back(make_pair(i,j));
            else{
                posKey[key[i][j]-'a'].push_back(make_pair(i,j));
            }
        }
    }
    bool can[26]={0};
    for (int i = 0; i <26 ; ++i) {
        for (int j = 0; j <posKey[i].size()&&!can[i] ; ++j) {
            can[i]= can[i]|check(posKey[i][j].first,posKey[i][j].second);
        }
    }
    int res=0;
    int q;cin>>q;
    string text;cin>>text;
    for (int i = 0;i < q;i++)
    {
        if (islower(text[i])) {
            if (posKey[text[i] - 'a'].empty()) {
                res = -1;
                break;
            }
        }
        else
        {
            text[i] = tolower(text[i]);
            if (shift.empty() || posKey[text[i] - 'a'].empty()){
                res = -1;
                break;
            }
            if (!can[text[i] - 'a']) res++;
        }
    }
    cout<<res<<endl;

    return 0;
}
