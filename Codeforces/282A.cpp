#include <bits/stdc++.h>
using namespace std;
#define Anas() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    Anas();
    int n,x=0;cin>>n;
    while(n--){
        string s;cin>>s;
        if(s[1]=='+') x++;
        else x--;
    }
    cout<<x;
}

