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
bool iswin(string cur){
    bool row = (cur[0]!='.'&&cur[0]==cur[1]&&cur[1]==cur[2]||
                cur[3]!='.'&&cur[3]==cur[4]&&cur[4]==cur[5]||
                cur[6]!='.'&&cur[6]==cur[7]&&cur[7]==cur[8]);

    bool column = (cur[0]!='.'&&cur[0]==cur[3]&&cur[3]==cur[6]||
                   cur[1]!='.'&&cur[1]==cur[4]&&cur[4]==cur[7]||
                   cur[2]!='.'&&cur[2]==cur[5]&&cur[5]==cur[8]);

    bool dig = (cur[0]!='.'&&cur[0]==cur[4]&&cur[4]==cur[8]||
                cur[2]!='.'&&cur[2]==cur[4]&&cur[4]==cur[6]);
    return row||column||dig;
}
int32_t main(){
    int tc;cin>>tc;
    while(tc--) {
        string board = "";
        for (int i = 0; i < 3; ++i) {
            string row;
            cin >> row;
            board += row;
        }
        string start = ".........";

        queue<pair<string, bool>> q;
        q.push({start, 1});
        string ans = "no";
        while (!q.empty()) {
            pair<string, int> cur = q.front();
            q.pop();
            if (cur.first == board) {
                ans = "yes";
                break;
            }
            if (iswin(cur.first)) continue;
            for (int i = 0; i < 9; ++i) {
                if (cur.first[i] == '.') {
                    cur.first[i] = (cur.second ? 'X' : 'O');
                    if (cur.first[i] == board[i])
                        q.push({cur.first, 1^cur.second });
                    cur.first[i]='.';
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
