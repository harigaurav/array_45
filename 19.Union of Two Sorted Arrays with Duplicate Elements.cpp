/*Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements
in the union of the two arrays in sorted order.
Union of two arrays can be defined as the set containing distinct common elements that are present 
in either of the arrays.*/



//LEVEL--EASY**
//CONCEPT--ARRAY BASED HASHING AND------
        /*for (auto & it: mp)
        ans.push_back(it.first);
        return ans;*/




//SOLUTION 
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
         int n=a.size();
        int m=b.size();
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(int i=0;i<m;i++){
            mp[b[i]]++;
        }
        for (auto & it: mp)
        ans.push_back(it.first);
        return ans;
        
    }
};
