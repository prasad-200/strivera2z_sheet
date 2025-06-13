//brute solution 
//tc-o(n) complexity
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int i;
        for(i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]>target){
                return i;
            }
        }
        return n;
    }
};

//optimal solution 
//tc-o(log(n) complexity
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int n=nums.size();
      int low=0;
      int mid;
      int high=n-1;
      while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
      }
      return low;
    }
};