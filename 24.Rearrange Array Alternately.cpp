/*Given a sorted array of positive integers. Your task is to rearrange the array elements
alternatively i.e first element should be max value, second should be min value, third should
be second max, fourth should be second min and so on.*/



//LEVEL---MEDIUM**********
//CONCEPT----DIVIDEND=(QUOTIENT*DIVISOR)+REMAINDER;
//DIVIDEND/DIVISOR=QUOTIENT;
//DIVIDEND % DIVISOR=REMAINDER;

// VERY IMP AND GOOD QUES TO SOLVE AND REMEMBER.

//solution--
class Solution{
    public:
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	 
    	 int min_index=0;
    	 int max_index=n-1;
    	 int max=arr[n-1]+1;
    	 for(int i=0;i<n;i++){
    	     if(i%2==0){
    	         arr[i]=(arr[max_index]%max)*max +arr[i];
    	         max_index--;
    	     }
    	     else{
    	         arr[i]=(arr[min_index]%max)*max +arr[i];
    	         min_index++;
    	     }
    	 }
    	 for(int i=0;i<n;i++){
    	     arr[i]=arr[i]/max;
    	 }
    	 
    }
};
