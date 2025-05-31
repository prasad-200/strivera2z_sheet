
//simple approch 
//tc-o(n)
//sc-o(1)
class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>&nums) {
            int n=nums.size();
            int count=0;
            int maxcount=0;
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    count=0;
                }
    
                if(nums[i]==1){
                    count=count+1;
                }
    
                if(count>maxcount){
                    maxcount=count;
                    }
            }
            return maxcount;
        }
    };