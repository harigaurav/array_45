/*Given an unsorted array arr of positive integers. One number a from the set
[1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.*/



//LEVEL--EASY**
//CONCEPT---arayy based hashing but    int hash[n+1]={0};





//SOLUTION--

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int a,b;
        int hash[n+1]={0};
        for(int i =0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<=n;i++){
            if(hash[i]==0){
                a=i;
            }
            else if(hash[i]==2){
                b=i;
            }
        }
        return {b,a};
    }
};

