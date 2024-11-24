//LEVEL-EASY
//CONCEPT-ADDING ALL POSITIVE ELEMENTS FIRT IN A TEMP0RARY ARRAY (BY ITERATING IT ONE TIME)
         -THEN ADDING ALL NEGATIVE ELEMENTS  IN THAT TEMP0RARY ARRAY (BY ITERATING IT ONE MORE TIME TIME)



class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
         int n=arr.size();
        int temp[n];
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                temp[j]=arr[i];
                j++;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                temp[j]=arr[i];
                j++;
                
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=temp[i];
        }
    }
};
