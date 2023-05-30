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
int main() {
    Amas();
  int a;
  while(cin>>a){
    queue<int> q; 
    stack<int> st;
    priority_queue<int>pq;
    bool isQ=true,isP=true,isS=true;
    for(int i=0;i<a;i++){
      int x,y;
      cin>>x>>y;
      if(x==1){
        q.push(y); 
        st.push(y);
        pq.push(y);
      }
      else{
        if(q.empty()||q.front()!=y) isQ = false;
        if(st.empty()||st.top()!=y) isS = false;
        if(pq.empty()||pq.top()!=y) isP = false;
        if(!q.empty()) q.pop();
        if(!pq.empty()) pq.pop();
        if(!st.empty()) st.pop();
      }
    }
    int test = isP+isS+isQ;
    if(test>1) cout<<"not sure"<<endl;
    else if(test==0) cout<< "impossible" <<endl;
    else if(isQ) cout<<"queue" <<endl;
    else if(isS) cout<<"stack"<<endl;
    else if(isP) cout<<"priority queue"<<endl;
  }
    return 0;
}