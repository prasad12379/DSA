/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
 

Follow up: Could you come up with a one-pass algorithm using only constant extra space?*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int> mp;

        for(int i=0 ; i<nums.size() ; i++){
            if(mp.find(nums[i])!=mp.end()){
                auto it=mp.find(nums[i]);
                it->second+=1;
            }
            else{
                mp.insert({nums[i] , 1});
            }
        }

        int mj_ele=nums.size()/2;

        for(auto& it : mp){
            if(it.second>mj_ele) return it.first;
        }
        return nums.size()/2;
    }
};
