
//brute force-o(n) -like linear search
class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=nums[0];
        for(auto it:nums){
            if(it<min){
                min=it;
            }
        }
        return min;
    }
};


//optimal solution 1(my approch)
//tc-o(log(n))

class Solution {
public:
    int findMin(vector<int>& nums) {
       int n=nums.size();
       int low=0;
       int high=n-1;
       int mid;
       while(low<=high){
          mid=(low+high)/2;
           //find the index with change
          if(nums[mid]>nums[(mid+1)%n]){
            return nums[((mid+1)%n)];
          }
          //right array sorted and trimmed 
          else if(nums[low]>nums[mid]){
            high=mid-1;
          }
         //left array sorted and trimmed
          else{
            low=mid+1;
          }
       }
       return nums[(mid+1)%n];
    }
};

//optimal 2 (log(n))
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