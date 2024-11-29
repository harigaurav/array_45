/*Given non-negative integers arr1,arr2,....arrn where each represents a point at
coordinate (i, arri). For each i vertical lines are drawn such that the two endpoints of line i
is at (i, arri) and (i,0). Find two lines, which together with x-axis form a container, such that
it contains the most water.*/


//LEVEL--medium 
//CONCEPT--TWO POINTERS 


//SOLUTION ---
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    int i=0;
    long long water;
    int j=len-1;
    long long ans=0;
    while(i<j){
        water=(j-i)*min(A[i],A[j]);
            if(A[i]<A[j]){
                i++;
            }
            else{
                j--;
            }
            ans=max(ans,water);
    }
        return ans;
    
}
