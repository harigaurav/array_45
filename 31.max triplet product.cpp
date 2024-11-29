/*Given an array arr of size n, the task is to find the maximum triplet product in the array.*/



//LEVEL- EASY****
//CONCEPT-SIMPLE OBSERVATION 



//SOLUTION---
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	sort(arr,arr+n);
    	long long num1=arr[n-1]*arr[n-2]*arr[n-3];
    	long long num2= arr[0]*arr[1]*arr[n-1];
    	return max(num1,num2);
    }
};

