class Solution {
public:

    void f(int n ,vector<int>& nums , vector<vector<int>>& ans , vector<int>& temp , int i){
        if(i>=n){
            ans.push_back(temp);
            return ;
        }

        
        temp.push_back(nums[i]);
        f(n,nums,ans,temp,i+1);

        temp.pop_back();
        f(n,nums,ans,temp,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        
        if(n==0){
            return ans;
        }
        int i=0;
        vector<int> temp;
        f(n,nums,ans,temp,i);

        return ans;
    }
};
