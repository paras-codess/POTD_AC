#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    set<int>stt;
    for(int i=0;st[i]!='\0';i++){
        stt.emplace(toupper(st[i]));
    }
    int set_size=stt.size();
    if(set_size==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   solve();
   return 0;
}