/*You are given a 2D binary array arr[][] consisting of only 1s and 0s. Each row of the array
is sorted in non-decreasing order. Your task is to find and return the index of the first row
that contains the maximum number of 1s. If no such row exists, return -1.*/




//LEVEL----EASY**
//CONCEPT--- BASIC CONCEPTS



//SOLUTION 
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int c=arr[0].size();
        int r=arr.size();
        int final_count=INT_MIN;
        int ans=-1,i;
        for( i=0;i<r;i++){
            int count=0;
            for(int j=0;j<c;j++){
                if(arr[i][j]==1){
                    count++;
                }
            }
            if(count>final_count&&count>0){
                    final_count=count;
                    ans=i;
                }
        }
       return ans;
    }
};

