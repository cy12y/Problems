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
int32_t main() {
    Anas();
    int t;cin>>t;
    while(t--) {
       priority_queue<pair<char,int>> pq;
       string s;cin>>s;
       long long p;cin>>p;
       long long sum=0;
        for (int i = 0; i < s.size(); ++i) {
            sum+= ((int)s[i]-96);
            pq.push({s[i],i});
        }
        while(!pq.empty() and p<sum){
            int a = pq.top().second;
            s[a]= '-';
            sum -= ((int)pq.top().first)-96;
            pq.pop();
        }
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]!='-') cout<<s[i];
        }
        cout<<endl;
    }
}