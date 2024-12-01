/*   You want to water n plants in your garden with a watering can. The plants are arranged
in a row and are labeled from 0 to n - 1 from left to right where the ith plant is located
at x = i. There is a river at x = -1 that you can refill your watering can at.   */



//level--EASY
//CONCEPT----UNDERSTANDING QUES IN STEPS


//SOLUTION 
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int cap= capacity;
        int steps=0;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=cap){
                steps++;
                cap=cap-plants[i];
            }
            else{
                steps+=(i+i+1);
                cap=capacity-plants[i];
            }
        }
        return steps;
    }
};
