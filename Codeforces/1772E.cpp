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
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int first =0,second =0, third=0,c;
        for (int i = 1; i <=n ; ++i) {
            cin>>c;
            if(c==i&&c!=n-i+1) first++;
            else if(c!=i&&c==n-i+1) second++;
            else if (c!=i&&c!=n-i+1) third++;
        }
        if(second+third<=first){
            cout<<"First"<<endl;
        }
        else if (first+third<second){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
    }

    return 0;
}

