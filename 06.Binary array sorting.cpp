//LEVEL-EASY*****
//CONCEPT- TWO POINTERS


//SOLUTION----

class Solution{
  public:
    void binSort(int A[], int N)
    {
       //Your code here
       int i=0;
         int j=N-1;
         while(i<j){
             if(A[i]==0){
                 i++;
             }
             else{
                 swap(A[i],A[j]);
                 j--;
             }
         }
       
    }
};
