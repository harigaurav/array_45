/*   Given an array arr. Find the majority element in the array. If no majority exists, return -1. A majority element in an array is 
an element that appears strictly more than arr.size() / 2 times in the array.*/


//level-basic
//concept-array based hashing


//solution 
// User function template for C++

class Solution {
  public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size) {

        // your code here
        int n=size;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<mp.size();i++){
            if(mp[i]>n/2){
                return i;
            }
        }
        return -1;
    }
    
};
