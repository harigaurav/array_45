/*Given an unsorted array arr containing only non-negative integers,
your task is to find a continuous subarray (a contiguous sequence of elements)
whose sum equals a specified value target. You need to return the 
1-based indices of the leftmost and rightmost 
elements of this subarray.*/


//LEVEL--EASY**
//CONCEPT--TWO POINTERS


//SOLUTION
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int s) {
        // code here
        int start=0;
        int sum=0;
        int n=arr.size();
        for(int end=0;end<n;end++){
            sum+=arr[end];
            
            
        while(sum>s&&start<=end){
            sum-=arr[start];
            start++;
        }
        if(sum==s){
            return {start+1,end+1};
        }
        }
        return {-1};
    }
};
