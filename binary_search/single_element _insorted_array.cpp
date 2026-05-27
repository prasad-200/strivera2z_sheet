//brut force using a map
// tc-o(n);
// sc-o(n)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};

//slighly better 
// tc-o(n)
// sc-o(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=n-1;
        while(i>0){
            if(nums[i]!=nums[i-1]){
                return nums[i];
            }
            i=i-2;
        }
        return nums[0];
    }
};

1 more approch to use xor

//optimal 
tc-o(log(n))
sc-o(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high){
           mid=(low+high)/2;
       //edge case
           if(mid==0 || mid==n-1){
                return nums[mid];
            }


           if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return nums[mid];
           }
           //if mid is at even index trim that part which does not have the mid elemnt
           else if(mid%2==0){
            if(nums[mid]==nums[mid+1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
           }

           //if mid is at even index trim that part which has the mid elemnt
           else if(mid%2!=0){
            if(nums[mid]==nums[mid+1]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            }
           }
           return nums[mid];
    }
};


