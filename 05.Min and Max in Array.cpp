//LEVEL-BASIC
//CONCEPT-NORMAL ITERATION

// User function Template for C++
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        long long int min=1000000000001;
        long long int max=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
            
        }
        pair<long long,long long> ans;
        ans.first=min;
        ans.second=max;
         return ans;
    }
};
