#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    // n-->no of problems
    // k--> no of min to reach party house
    int n,k;
    cin>>n>>k;
    // total time is 4hr==240min
    int rem_time=240-k;// to ensure his presence in party
    // an array to store time to solve each problem
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=5*(i+1);
    }
    //loop to count no of problem solved.
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=rem_time){
            count++;
            sum+=arr[i];
        }
        else{
            break;
        }
    }
    // print the count of problem soved
     cout<<count<<endl;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   solve();
   return 0;
}