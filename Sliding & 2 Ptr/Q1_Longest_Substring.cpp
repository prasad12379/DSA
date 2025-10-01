/*3. Longest Substring Without Repeating Characters
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.*/


//O(N2)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0;
       int right=0;
       
       int len=0;
       int max_len=0;

       for(left=0 ; left<s.size() ; left++){
        vector<int> arr(256,-1);
        for(right=left ; right<s.size() ; right++){
            
            if(arr[s[right]]!=-1){
                
                break ;
            }
            arr[s[right]]=right;
            
        }
        len=right-left;
        max_len=max(max_len,len);
        
       }
       return max_len;
    }
};


//Optimal

vector<int> mp(256,-1);
    for(int right=0 ; right<s.size() ; right++){
       if(mp[s[right]]!=-1){
        if(mp[s[right]]>=left) left=mp[s[right]]+1;;
       }
       len=right-left+1;
       max_len=max(len,max_len);
       mp[s[right]]=right;
    
    }
