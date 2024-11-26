/*Given an array of size n and a range [a, b]. The task is to partition the array around
the range such that the array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to 
return the modified array.
*/



//LEVEL--EASY**
//concept--THREE POINTERS



//SOLUTION----
//User function template for C++

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int i=0;
        int j=0;
        int n =array.size();
        int k=n-1;
        while(i<=k){
            
            if(array[i]<a){
                swap(array[i],array[j]);
                i++;
                j++;
                
            }
            else if(array[i]>b){
                swap(array[i],array[k]);
                k--;
            }
            else{
                i++;
            }
                
            
        }
    }
};
