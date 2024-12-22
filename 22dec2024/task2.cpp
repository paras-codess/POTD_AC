class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int size=nums.size(),count=0;
            for(int i=0;i<size;i++){
                if((nums[i]+1)%3==0||(nums[i]-1)%3==0) count++;
            }
            return count;
    }
};