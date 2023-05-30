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
    priority_queue<pair<int,int>> pq;
    int res =0;
    int m,n;cin>>m>>n;
    for (int i = 0; i < n; ++i) {
        int x,y;cin>>x>>y;
        pq.push({y,x});
    }
    while(m>00&&!pq.empty()){
        auto a=pq.top();pq.pop();
        if(a.second>=m){
            res+= m*a.first;
            m=0;
        }
        else{
            res+= a.first*a.second;
            m-=a.second;
        }
    }
    cout<<res<<endl;
    return 0;
}

