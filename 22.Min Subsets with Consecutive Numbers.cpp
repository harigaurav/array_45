/*Given an array of distinct positive numbers, the task is to calculate the minimum number of
subsets (or subsequences) from the array such that each subset contains consecutive numbers.*/



//LEVEL-EASY
//CONCEPT-SORTING+COUNTING


//solution--
class Solution {
  public:
    int numOfSubset(vector<int> &arr) {
        // Your code goes here
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i+1]-arr[i]!=1){
                count++;
            }
        }
        return count;
    }
};
