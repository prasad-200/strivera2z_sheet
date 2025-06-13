
//brute force -tc(o(n))
int count(vector<int>& nums, int n, int target) {
	// Write Your Code Here
 int count=0;
 for(auto it:nums){
     if(it==target){
         count++; 
     }
 }
 return count;      
}
// optimal 
// tc-o(2log(n));
class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        // code here
       int n=nums.size();
       int firstocc=-1;
       int secondocc=-1;

       //finding the first occurence in array
      int low=0;
      int high=n-1;
      while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            firstocc=mid;
            high=mid-1;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
      }

 // second occurence
      if(firstocc!=-1){
      int low=0;
      int high=n-1;
      while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            secondocc=mid;
           low=mid+1;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
      }
      }
      if(firstocc==-1&&secondocc==-1){
          return 0;
      }
      return (secondocc-firstocc)+1;
    }
    };



