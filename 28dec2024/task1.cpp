class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>final;
        vector<int>temp;
        int size=original.size();
        if(size!=m*n) return final;
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp.push_back(original[k]);
                k++;
            }
                final.push_back(temp);
            temp.clear();
        }
        return final;
        
    }
};