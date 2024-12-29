#include<bits/stdc++.h>
#define int long long
using namespace std;
bool is_prime(int m){
    int count=0;
    for(int i=2;i<m;i++){
        if(m%i==0) count++;
    }
    if(count==0) return true;
    else return false;
}
void solve()
{
   int n;
   cin>>n;
   int almost_count=0;
   for(int i=1;i<=n;i++){
    int count_prime=0;
    for(int j=2;j<=i;j++){
        if(i%j==0&&is_prime(j))
        {
            count_prime++;
        }
    }
        if(count_prime==2) almost_count++;
   }
   cout<<almost_count;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   solve();
   return 0;
}