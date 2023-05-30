#include <bits/stdc++.h>
using namespace std;
#define Anas() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    Anas();
    int n,x,k=0;cin>>n>>x;
    while(n--){
        char a;int b;cin>>a>>b;
        if(a =='+') x+=b;
        else{
            if(b>x) k++;
            else x-=b;
        }
    }
    cout<<x<<" "<<k<<endl;
}


