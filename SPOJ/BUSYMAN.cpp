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
int32_t  main() {
    Anas();
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        priority_queue<pii> pq;
        while(n--){
            int start,end;cin>>start>>end;
            pq.push({-end,-start});
        }
        int cnt =0;
        int current =0;
        while(!pq.empty()){
            auto aa = pq.top();pq.pop();
            if(-aa.second<current) continue;
            cnt++;
            current=-aa.first;
        }
        cout<<cnt<<endl;
    }
}

