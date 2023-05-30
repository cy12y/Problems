#include <bits/stdc++.h>
using namespace std;
#define Anas() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    Anas();
    int a,b,cnt=0;cin>>a>>b;
    while(a--){
        int temp;cin>>temp;
        cnt++;
        if(temp>b) cnt++;
    }
    cout<<cnt;
}

