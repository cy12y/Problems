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
   int tc;cin>>tc;
   while(tc--){
       int x,y,z;cin>>x>>y>>z;
       VI xx(1);xx[0]=0;
       VI yy(1);yy[0]=0;
       while(z--){
           int xi,yi;cin>>xi>>yi;
           xx.push_back(xi);
           yy.push_back(yi);
       }
       xx.push_back(x+1);
       yy.push_back(y+1);

       sort(xx.begin(),xx.end());
       sort(yy.begin(),yy.end());
//       for(int i=0;i<xx.size();i++){
//           cout<<xx[i]<<" ";
//       }
//       cout<<endl;
//       for(int i=0;i<xx.size();i++){
//           cout<<yy[i]<<" ";
//       }
//       cout<<endl;
       int mx=0,my=0;
       for(int i=1;i<xx.size();i++){
           mx=max(mx,xx[i]-xx[i-1]-1);
           my=max(my,yy[i]-yy[i-1]-1);
           //cout<<i<<" "<<mx<<' '<<my<<endl;
       }
       cout<<mx*my<<endl;
   }
}

