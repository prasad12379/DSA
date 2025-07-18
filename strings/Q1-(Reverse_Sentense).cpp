/*A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.*/

class Solution {
public:
    string reverseWords(string s) {
       string temp="";
       string ans="";

       for(int i=0 ; i<s.size() ; i++){
        if(s[i]==' ' && temp=="") continue;
        if(s[i]==' ' && temp!=""){
            if(ans!=""){
                temp.insert(temp.begin() , ' ');
                ans.append(temp);
            }
            else{
                ans.append(temp);
            }
            temp.erase(temp.begin() , temp.end());
        }
        else{
             temp+=s[i];
        }

       
       }

        if (temp != "") {
            if (ans != "") {
                temp.insert(temp.begin(), ' ');
                ans.append(temp);
            } else {
                ans.append(temp);
            }
        }

       reverse(ans.begin() , ans.end());
       int i=0;
       int j=0;
       while(i<=ans.size()){
        if(i==ans.size() || ans[i]==' '){
            reverse(ans.begin()+j, ans.begin()+i);
            j=i+1;
        }
        i++;
       }
       return ans;

    }
};
