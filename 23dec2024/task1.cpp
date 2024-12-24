//method-1
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size=nums.size();
        vector<int>vec;
        for(int i=0;i<size;i++){
            int count=0;
            for(int j=0;j<size;j++){
                if(nums[i]>nums[j]) count++;
            }
            vec.push_back(count);
        }
        return vec;
    }
};