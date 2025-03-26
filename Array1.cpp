class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cnt=0;
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=0 ; j<nums.size() ; j++){
                
                if(nums[i]==nums[j]){
                    cnt+=1;
                }
            }
            if(cnt<2){
                return nums[i];
            }
            cnt=0;
        }
        return -1;
    }
    
};
