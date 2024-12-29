class Solution {
public:
    int square(int n){
        int sum=0;
    while(n>0){
        sum+=(n%10)*(n%10);
        n/=10;
    }
    if(sum==1||sum==7) return 1;
    if(sum>=0&&sum<=9) return sum;
   return square(sum);
    
    }
    bool isHappy(int n) {
     int result=square(n);
     cout<<result;
     if(result==1) return true;
     else return false;
    }
};