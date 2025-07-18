/*
    Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?*/


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
