#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    map<string,int> mp;
    int n;cin>>n;
    while(n--){
        string s,s1;cin>>s>>s1;
        if(mp.find(s1)==mp.end()) mp[s1]=0;
        mp[s1]++;
    }
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        cout<<mp[s]<<endl;
    }
}
