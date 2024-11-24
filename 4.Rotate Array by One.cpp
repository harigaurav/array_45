LEVEL- EASY*****
CONCEPT- SORTING OR USING REVERSE FUNCTION




// optimized solution 
class Solution {
  public:
    void rotate(vector<int> &arr) {
        reverse(arr.begin(),arr.end());
        reverse(arr.begin()+1,arr.end());
        
    }
};


//brute force is by sorting algorithm
