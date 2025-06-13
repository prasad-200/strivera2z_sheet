//brute solution
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
//optimal solution(log(n))
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
        //left sorted
        if(nums[mid]>=nums[low]){
            if(target>=nums[low] && target<=nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        //right sorted
        else{
            if(target>=nums[mid] && target<=nums[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
         }
        }
        return -1;
    }
};