/*You are given an array arr. Replace every element with the next
greatest element (the greatest element on its right side) in the array. 
Note: There is no element next to the last element, so replace it with -1.
*/

//LEVEL-MEDIUM*******
//CONCEPT-LOGIC/THINKING

//solution---
// User function template for C++
class Solution {
  public:
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int greater=-1;
        int n =arr.size();
        int temp=0;
        for(int i=n-1;i>=0;i--){
            temp=arr[i];
            arr[i]=greater;
            greater=max(temp,greater);
        }
        return arr;
        
    }
};
