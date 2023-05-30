#include <bits/stdc++.h>
using namespace std;
#define Anas() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    Anas();
    
  int n;cin>>n;
  bool is_sorted = true;
  int temp=5000;
  while(n--){
      int s1,s2;cin>>s1>>s2;
      if(s1!=s2){
          cout<<"rated"<<endl;
          return 0;
      }
      if(s1>temp) is_sorted =false;
      temp=s1;
  }
  if(is_sorted) cout<<"maybe";
  else cout<<"unrated";
}

