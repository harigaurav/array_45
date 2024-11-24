//LEVEL--EASY 
//CONCEPT--IF/ELSE AND BASICS


//SOLUTION----
class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        int sum =0;
        for(int i=0;i<car.size();i++){
            if(date%2==0&&car[i]%2==1){
                sum=sum+fine[i];
            }
            if(date%2==1&&car[i]%2==0){
                sum=sum+fine[i];
            }
        }
        return sum;
    }
};
