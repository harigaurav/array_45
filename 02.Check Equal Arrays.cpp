//level- EASY
//concept- array based hashing or sorting searching 





// using map (0.02 seconds)
class Solution {
  public:
    bool check(vector<int>& arr1, vector<int>& arr2) {
        // code here
        if(arr1.size()!=arr2.size()){
            return false;
        }
        map<int,int>mp;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            mp[arr2[i]]--;
        }
        for(int i=0;i<mp.size();i++){
            if(mp[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};



// 0.04 seconds 

class Solution {
  public:
        if(arr1.size() == arr2.size()){
            sort(arr1.begin(), arr1.end());
            sort(arr2.begin(), arr2.end());
            if(arr1 == arr2){
                return true;
            }
        }
            return false;
    }
};
