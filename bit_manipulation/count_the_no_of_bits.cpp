
//brute force
tc-o(log(n))
sc-o(1)
class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int count=0;
        while(n>0){
            if(n%2!=0){//as soon as a non zero occurs count is incremented 
                count++;
            }
            n=n/2;
        }
        return count;
    }
};