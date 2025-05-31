//brute force
using a linear search approch for all the numbers from 0 To N 
tc-0(n2) sc-0(1)

better- use hash array(n+1) size and store frequencies of all elements in array the one with 0 freq is missing 
tc-o(n)
sc-0(n) extra hash array


optimal solution(my approch)
tc-o(n)
sc-o(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expectsum=(n*(n+1))/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        int missingno=expectsum-sum;

        return missingno;
    }
};
