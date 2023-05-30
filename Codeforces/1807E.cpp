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
const int mx = 1e9+7;
VI v;

int32_t main() {
    int tc =1;
    cin>>tc;
    while(tc--){
        int n;cin>>n;
        int arr[n+1];
        int pref[n+1];pref[0]=0;
        for (int i = 1; i <=n ; ++i) {
            cin>>arr[i];
            pref[i]=arr[i]+pref[i-1];
        }
        int l=1,r=n,ans=0;
        while(l<=r){
            int mid =(l+r)/2;
            cout<<"? "<<(mid-l)+1<<" ";
            for (int i = l; i <= mid ; ++i) {
                cout<<i<<" ";
            }
            cout<<endl<<flush;
            int res =0;cin>>res;
            if(res==pref[mid]-pref[l-1]){
                l=mid+1;
            }
            else{
                r=mid-1;
                ans=mid;
            }

        }
        cout<<"! "<<ans<< endl<<flush;
    }

    return 0;
}
