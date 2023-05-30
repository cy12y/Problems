#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Anas() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef vector<char> VC;
typedef vector<VC> VVC;
typedef vector<bool> VB;
typedef vector<VB> VVB;
typedef pair<int,int> pii;
  void readMap(map<string,string> &mp){
    char buff[109];
    cin>>buff;
    int idx =1 ;
    while(buff[idx]!='\0' && buff[idx]!='}'){
      string key,value;
      while(buff[idx]!=':')
        key+=buff[idx++];
      idx++;
      while(buff[idx] !=',' && buff[idx]!= '}')
        value +=buff[idx++];
      idx++;

      mp[key]=value;
    }
  }
    void printDiff(map<string,string> &OLD,map<string,string> &NEW){
      int cnt =0;
      bool flag=true;
      for(auto newKey : NEW){
        if(OLD[newKey.first]==""){
          flag=false;
          if(!cnt) cout<<"+";
          else cout<<",";
          cout<<newKey.first;
          cnt++;
        }
      }
      if(cnt) cout<<endl;
      cnt =0;
      for(auto oldKey : OLD){
        if(NEW[oldKey.first]==""){
          flag=false;
          if(!cnt) cout<<"-";
          else cout<<",";
          cout<<oldKey.first;
          cnt++;
        }
      }
      if(cnt) cout<<endl;
       cnt =0;
      for(auto oldKey : OLD){
if(NEW[oldKey.first]!="" && OLD[oldKey.first]!="" && NEW[oldKey.first]!=oldKey.second){
  flag = false;
          if(!cnt) cout<<"*";
          else cout<<",";
          cout<<oldKey.first;
          cnt++;
        }
      }
      if(cnt) cout<<endl;
      if(flag) cout<<"No changes"<<endl;
      cout<<endl;
}
int main() {
    Anas();
  int a;
  cin>>a;
  while(a--){
    map<string,string> OLD,NEW;
    readMap(OLD);
    readMap(NEW);
    printDiff(OLD,NEW);
  }
    return 0;
}
