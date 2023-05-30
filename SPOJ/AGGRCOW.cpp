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
bool can(int dist, int cnt ){
    int last =v[0];
    int cntOfCows=1;
    for (int i = 1; i < v.size(); ++i) {
        if(v[i]-last>=dist){
            last=v[i];
            cntOfCows++;
        }
        if(cntOfCows==cnt) break;
    }
    return cntOfCows>=cnt;
}

int32_t main() {
   int tc =1;
   cin>>tc;
   while(tc--){
       int cells,cows;cin>>cells>>cows;
      v.clear();
       for (int i = 0; i < cells; ++i) {
          int c;cin>>c;
          v.push_back(c);
       }
       sort(v.begin(),v.end());
       int l=0,r=mx,mid;
       while(l+1<r){
            mid = (l+r)/2;
           if(can(mid,cows)) {
               l = mid;

           }
           else r =mid-1;
       }
       if(can(r,cows)) cout<<r<<endl;
       else cout<<l<<endl;
   }

    return 0;
}
