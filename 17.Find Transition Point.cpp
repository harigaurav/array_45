/*Given a sorted array, arr[] containing only 0s and 1s, find the transition point, i.e., 
the first index where 1 was observed, and before that, only 0 was observed.  If arr does not
have any 1, return -1. If array does not have any 0,return 0. */



//LEVEL---- BASIC
//CONCEPT-- ITERATION


//SOLUTION 
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        for(int i =0;i<n;i++){
            if(arr[i]==1){
                return i;
            }
        }
        return -1;
    }
};
