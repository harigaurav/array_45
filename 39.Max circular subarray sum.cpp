/*Given an array of integers arr[] in a circular fashion. Find the maximum subarray sum that we can get if we assume the array to be circular.*/



//level-medium**********VVI
//CONCEPT-KADANE'S ALGORITHM AND MANY MORE EDGE CASES;


//SOLUTION--

class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int s1=0;
        int maxi=INT_MIN;
        int totalsum=0;
        int mini=INT_MAX;
        for(int i =0;i<arr.size();i++){
            s1+=arr[i];
            totalsum+=arr[i];
            maxi=max(maxi,s1);
            if(s1<0){
                s1=0;
            }
        }
        int  s2=0;
        for(int i=0;i<arr.size();i++){
            s2+=arr[i];
            mini=min(mini,s2);
            if(s2>0){
                s2=0;
            }
            
        }
        if(totalsum==mini){
            return maxi;
        }
        return max(maxi,totalsum-mini);
        
    }
};
