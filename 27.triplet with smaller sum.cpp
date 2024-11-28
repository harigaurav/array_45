/*Given an array arr[] of distinct integers of size n and a value sum, the task is to find the
count of triplets (i, j, k), having (i<j<k) with the sum of (arr[i] + arr[j] + arr[k]) smaller 
than the given value sum.*/


//LEVEL-MEDIUM*************8
//CONCEPT- TRIPLET/THREE POINTERS/VERY IMPORTANT/TRY TO UNDERSTAND THE PATTERN


//SOLUTION 
class Solution {
  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        long long count=0;
        long long ans;
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                ans=arr[i]+arr[left]+arr[right];
                if(ans<sum){
                    count+=(right-left);
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return count;
    }
};
