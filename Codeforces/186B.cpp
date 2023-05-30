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
    double n,t1,t2,k;cin>>n>>t1>>t2>>k;
    priority_queue<pair<double,int>> pq;
    for (int i = 1; i <=n ; ++i) {
        double a,b;cin>>a>>b;
        double m1=((a*t1)*(1.0-(k/100.0)))+(b*t2);
        double m2=((b*t1)*(1.0-(k/100.0)))+(a*t2);
        pq.push({max(m1,m2),-i});
    }
    while(!pq.empty()){
        cout<<-pq.top().second<<" "<<fixed<<setprecision(2)<<pq.top().first<<endl;
        pq.pop();
    }
    return 0;
}

