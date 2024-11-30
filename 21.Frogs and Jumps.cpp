/* N frogs are positioned at one end of the pond. All frogs want to reach the other end of the
pond as soon as possible. The pond has some leaves arranged in a straight line. Each frog has
the strength to jump exactly K leaves. For example, a  frog having strength 2 will visit the 
leaves 2, 4, 6, ...  etc. while crossing the pond.

Given the strength of each frog and the number of leaves, your task is to find the number of
leaves that not be visited by any of the frogs when all frogs have reached the other end of the
pond. */


//level--easy******************************************************************88
//concept---USING SETS INSTED OF HASHMAPS;



//solution--//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        int count=0;
       unordered_set<int>mp;
        for(int i=0;i<N;i++){
            int j=frogs[i];
              if(mp.find(j)==mp.end()){
            while(j<=leaves){
                mp.insert(j);
                j+=frogs[i];
            }
              }
            
        }
        int k=mp.size();
        return leaves-k;
    }
};
