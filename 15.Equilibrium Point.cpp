/* Given an array arr of non-negative numbers. The task is to find the first equilibrium point
in an array. The equilibrium point in an array is an index (or position) such that the sum of 
all elements before that index is the same as the sum of elementsafter it.*/


//LEVEL--EASY*****
//CONCEPT--LEFT_SUM/RIGHT_SUM


//SOLUTION----class Solution {
  public:
    int equilibriumPoint(vector<long long> &arr) {
        // Your code herea
        long long total_sum=0;
        long long n =arr.size();
        for(int i=0;i<n;i++){
            total_sum+=arr[i];
        }
        long long left_sum=0,right_sum=total_sum;
        for(int i=0;i<n;i++){
            right_sum-=arr[i];
        
        if(right_sum==left_sum){
            return i+1;
        }
        left_sum+=arr[i];
        }
        return -1;
    }
};
