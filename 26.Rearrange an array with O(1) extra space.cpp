/*Given an array arr[] of size N where every element is in the range from 0 to n-1.
Rearrange the given array so that the transformed array arrT[i] becomes arr[arr[i]].*/



//LEVEL----MEDIUM*****
//CONCEPT--



//SOLUTION---
    

class Solution{
    public:
    
    void arrange(long long arr[], int n) {
        // Your code here
         for (int i=0; i < n; i++) 
        arr[i] += (arr[arr[i]]%n)*n; 
 
    for (int i=0; i<n; i++) 
        arr[i] /= n; 
    
        
    }
};
