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
    int n;cin>>n;
    VI exit(n),enter(n),find(n+1,0);
    for (int i = 0; i < n; ++i) {
        cin>>enter[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>exit[i];
    }
    int exitp=0,enterp=0,cnt=0;
    while(enterp<n){
        if(exit[exitp]==enter[enterp]) {
            enterp++;
            exitp++;
        }
        else if(find[enter[enterp]]) {
            enterp++;
        }
        else{
           cnt++;
           find[exit[exitp]]=1;
            exitp++;

        }

    }
    cout<<cnt;
}

