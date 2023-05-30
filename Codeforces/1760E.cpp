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
int count(vector<int> &v,int n,int fi,int l,bool f){
    int ze=0, on=0;
    int res= 0;
//    for(auto x:v){
//        // cout<<x<<" ";
//    }
//    // cout<<endl;
    for(auto x:v){
        if(x==0){
            res+= on;
        }
        else{
            on++;
        }
    }
    if(f) {
        v[fi]=1;
        int res1 = count(v,n,fi,l,false);
        //cout<<v[fi]<<" ";
        v[fi]=0;
        //cout<<v[fi]<<" "<< res1<<endl;
        v[l]=0;

        int res2 = count(v,n,fi,l,false);
        //cout<<v[l]<<" ";
        v[l]=1;
        // cout<<v[l]<<" "<< res2<<endl;
        res = max(res,max(res1,res2));
    }
    return res;
}
int32_t  main() {
    Anas();
    int t;cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int f =n-1;
        bool ff  =true;
        int l = n-1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]==0&&ff){
                f =i;ff = false;
            }
            if(v[i]==1) l = i;
        }
        //cout<<f<<' '<<l<<endl;
        cout<<count(v,n-1,f,l,true)<<endl;

    }
    return 0;
}


