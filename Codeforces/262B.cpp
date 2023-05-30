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
    int n,k,sum=0;cin>>n>>k;
    priority_queue<int> pq;
    while(n--){
        int c;cin>>c;
        pq.push(-c);
        sum+=c;
    }
    while(k--){
        int kk = -pq.top();
        sum-=kk;
        sum+=(-kk);
        pq.pop();
        pq.push(kk);
    }
    cout<<sum;
}

