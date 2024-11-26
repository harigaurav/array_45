/*Given an unsorted array arr containing both positive and negative numbers. Your task is to 
rearrange the array and convert it into an array of alternate positive and negative numbers without
changing the relative order.*/


//LEVEL--EASY*********
//CONCEPT--ITERATING ARRAY FOR BOTH POS AND NEG 

//SOLUTION 
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        int n = arr.size();
         vector<int> pos,neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            pos.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    if(pos.size()>neg.size()){
	        for(int i=0;i<neg.size();i++){
	            arr[2*i]=pos[i];
	            arr[2*i+1]=neg[i];
	        }
	        int index= neg.size()*2;
	        for(int i=neg.size();i<pos.size();i++){
	            arr[index]=pos[i];
	            index++;
	        }
	    }
	    else{
	        for(int i=0;i<pos.size();i++){
	            arr[2*i]=pos[i];
	            arr[2*i+1]=neg[i];
	        }
	        int index= pos.size()*2;
	        for(int i=pos.size();i<neg.size();i++){
	            arr[index]=neg[i];
	            index++;
	        }
	        
	    }
    }
};
