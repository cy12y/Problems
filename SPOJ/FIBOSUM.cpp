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


const int mod = 1e9+7;
const int sz=2;

struct matrix{
    int m[sz][sz];

    matrix(){
        memset(m,0,sizeof(m));
    }

    void identity(){
        for (int i = 0; i < sz; ++i) {
            m[i][i] = 1;
        }
    }

    matrix operator* (matrix a){
        matrix res;
        for (int i = 0; i < sz; ++i) {
            for (int j = 0; j < sz ; ++j) {
                for (int k = 0; k < sz; ++k) {
                    res.m[i][j] += m[i][k]%mod * a.m[k][j]%mod;
                    res.m[i][j] %= mod;
                }
            }
        }
        return res;
    }
};
int Fib(int n){
    matrix res;
    res.identity();
    matrix T;
    T.m[0][0] = T.m[1][0] = T.m[0][1] = 1;

    if(n<=2) return 1;
    n-=2;

    while(n){
        if(n&1) res = res * T;
        T = T * T;
        n/=2;
    }
    return (res.m[0][0] + res.m[0][1]) % mod;
}
int32_t main() {
  Anas();
    int t;cin>>t;
    while(t--) {
        long long n,m;cin>>n>>m;
        //if(a==0) a++;
        long long sum =(Fib(m+2))-(Fib(n+1))+mod;
        cout<<sum%mod<<endl;
    }
    return 0;
}
