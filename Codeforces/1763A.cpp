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
    int t;cin>>t;

    while(t--) {
        int n;
        cin >> n;
        int f;cin>>f;
        bitset<10> mx(f);
        bitset<10> mn(f);
        //cout<<mx.to_string()<<" "<<mn.to_string()<<endl;
        for (int i = 0; i < n; ++i) {
            if(i!=0) cin>>f;
            for (int j = 0; j <= 10; ++j) {
                if((f>>j)&1) mx[j]=1;
                else mn[j]=0;
            }
        }
        cout<<mx.to_ullong()-mn.to_ullong()<<endl;
    }
}