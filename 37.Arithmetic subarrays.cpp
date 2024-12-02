/* A sequence of numbers is called arithmetic if it consists of at least two elements, and the difference between every two consecutive elements 
is the same. More formally, a sequence s is arithmetic if and only if s[i+1] - s[i] == s[1] - s[0] for all valid i.
*/




//level-easy*
//concept-basic conditions



//solution--
class Solution {
public:
    bool helper(vector<int>& nums, int first, int last) {
        vector<int> temp;
        for (int i = first; i <= last; i++) {
            temp.push_back(nums[i]);
        }
        sort(temp.begin(), temp.end());
        int diff = temp[1] - temp[0];
        for (int i = 1; i < temp.size() - 1; i++) {
            if (temp[i + 1] - temp[i] != diff) {
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l,
                                          vector<int>& r) {
        vector<bool> ans;
        for (int i = 0; i < l.size(); i++) {
            int first = l[i];
            int last = r[i];
            if (last - first + 1 >= 2) {
                ans.push_back(helper(nums, first, last));
            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};
