//LEVEL--EASY
//CONCEPT--ARRAY BASED HASHING


//SOLUTION-----

class Solution {
  public:
    int missingNumber(int n, vector<int> &arr) {
        // code here
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
                return i;
            }
        }
        
    }
};
