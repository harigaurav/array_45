//Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.


//LEVEL--EASY***
//CONCEPT--three pointers


//SOLUTION---
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n =arr.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--;
            }
            else{
                mid++;
            }
        }

        
    }
};

