LEVEL-EASY
CONCEPT-BASIC MATHS 


// SOLUTION----

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int n=arr.size();
        int d=(arr[n-1]-arr[0])/n;
        for(int i=0;i<arr.size();i++){
            if(arr[i+1]-arr[i]!=d)
                return arr[i]+d;
        }
        
    }
};




//imp thing to remember:
//d=(last element of an AP - first element of an AP)/size of AP 