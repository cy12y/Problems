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
void Generate(map<string,int> &mp){
    int count =1;
    for (char i = 'a'; i <= 'z'; ++i) {
        for (char j = 'a'; j <= 'z'; ++j) {
            if(i!=j){
                string s = "";
                s+=i;
                s+=j;
               // cout<<s<<endl;
                mp[s]= count++;
            }
        }
    }
}
int32_t main() {
    Anas();
    int t;cin>>t;
    while(t--) {
       string s,t;cin>>s>>t;
       int cnt1=0,cnt2=0;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='a') cnt1++;
        }
        for (int i = 0; i < t.size(); ++i) {
            if(t[i]=='a') cnt2++;
        }
        if(cnt1!=0&&cnt2!=0){
            if(t.size()==1) cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else {
            if(cnt1==0){
                cout<<1<<endl;
            }
            else{
                unsigned long long res =1;
                for (int i = 1; i <= cnt1; ++i) {
                    res = res * 2;
                }
                cout<<res<<endl;
            }
        }
    }
}

