simple linear search
tc-o(n)
sc-o(1)
class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
