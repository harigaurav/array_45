/*Given a boolean matrix of size RxC where each cell contains either 0 or 1,
modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row
and jth column will become 1.*/




//LEVEL--MEDIUM****
//CONCEPT-- matrix of array /must remember 



//SOLUTION----


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int nc=matrix[0].size();
        int nr=matrix.size();
        int rows[nr],col[nc];
        
        for(int i=0;i<nr;i++){
            rows[i]=0;
        }
        for(int i=0;i<nc;i++){
            col[i]=0;
        }
        
        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                if(matrix[i][j]==1){
                    rows[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                if(rows[i]||col[j]){
                    matrix[i][j]=1;
                }
            }
           }
        
    }
};

