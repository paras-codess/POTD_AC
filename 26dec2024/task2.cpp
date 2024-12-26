#include<bits/stdc++.h>
#define int long long
using namespace std;
void  solve()
{  
   int n;
   cin>>n;
   int a;
   int count=0;
   for(int i=5;n>0;i*5){
    n=n/i;
    count+=n;
   }
   cout<<count;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   solve();
   return 0;
