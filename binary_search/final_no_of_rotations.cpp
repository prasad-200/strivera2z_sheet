brute solution -
o(n)..find the index at which its previous index is greater 

optimal solution1-o(log(n));
class Solution {
public:
    int findMin(vector<int>& nums) {
       int n=nums.size();
       int low=0;
       int high=n-1;
       int mid;
       while(low<=high){
          mid=(low+high)/2;
          if(nums[mid]>nums[(mid+1)%n]){
            return (mid+1);
          }
          else if(nums[low]>nums[mid]){
            high=mid-1;
          }
        
          else{
            low=mid+1;
          }
       }
       return (mid+1);
    }
};

// optimal 2
// in this just keep a track of the index with minimum element
//tc (log(n))
selects the minimum from sorted and eliminated the sorted part 
class Solution {
public:
    int findMin(vector<int>& nums) {
       int n=nums.size();
       int low=0;
       int high=n-1;
       int mid;
       int ans=INT_MAX;
       while(low<=high){
          mid=(low+high)/2;
        //left array sorted
          if(nums[low]<=nums[mid]){
               ans=min(nums[low],ans);
               low=mid+1;
          }
          //right array sorted
          else{
               ans=min(nums[mid],ans);
               high=mid-1;
          }
    }
    return ans;
}
};