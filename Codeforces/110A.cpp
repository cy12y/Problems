#include <bits/stdc++.h>
using namespace std;
#define Anas() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    Anas();
    string s;cin>>s;
    int cnt =0;
    for (int i = 0; i < s.size(); ++i) 
        if(s[i]=='7' or s[i]=='4') cnt++;
        
    if(cnt==7 or cnt ==4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}


