class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int size=bank.size();
        vector<int>vec;
        for(int i=0;i<size;i++){
            int count=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1') 
                count++;
            }
            if(count!=0){
            vec.push_back(count);
            }
        }
        int size_vec=vec.size();
        int beams=0;
        for(int i=0;i<size_vec-1;i++){
            beams+=(vec[i]*vec[i+1]);
        }
      return beams;
    }