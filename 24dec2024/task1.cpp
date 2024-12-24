//method-1
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>nums={2,0,1,2,2,2,2,0,0,0,1,2,1,1,1,1,0,0,};
// a-->number of red color balls
// b-->number of white color balls
// c-->number of green color balls
int a,b,c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) a++;
            if(nums[i]==1) b++;
            if(nums[i]==2) c++;

        }
        nums.clear();
        //now clear array to fill it again 
        //fill red balls
        while(a--){
            nums.push_back(0);
        }
        //fill white balls
         while(b--){
            nums.push_back(1);
        }
        //fill blue balls
         while(c--){
            nums.push_back(2);
        }
        //print the array
        for(auto it:nums){
            cout<<it;
        }
        return 0;
}
// METHOD-2
    //  Bubble sort O(n^2)
    void sortColors(vector<int>& nums) {
        int size=nums.size();
       for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
     }
      }
//  METHOD-3
     // brute force approach O(nlogn)
    void sortColors(vector<int>& nums) {
     sort(nums.begin(),nums.end());
    }
// METHOD -4
     // optimized approach O(n)
    void sortColors(vector<int>& nums) {
      int a,b,c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) a++;
            if(nums[i]==1) b++;
            if(nums[i]==2) c++;

        }
        int idx=0;
        for(int i=0;i<a;i++){
            nums[idx++]=0;
        }
         for(int i=0;i<b;i++){
            nums[idx++]=1;
        }
         for(int i=0;i<c;i++){
            nums[idx++]=2;
        }
    }
// METHOD-5
    // most optimal approach (DNF) Dutch national flag algorithm
    void sortColors(vector<int>& nums) {
        int size=nums.size();
        int low=0,mid=0,high=size-1;
        while(mid<=high){
           if(nums[mid]==0){
            swap(nums[low],nums[mid]);
              low++;
              mid++;
           }
           else if(nums[mid]==1){
            mid++;
           }
           else{
            swap(nums[high],nums[mid]);
            high--;
           }
        }
    }

};
