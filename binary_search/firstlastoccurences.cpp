//brute force tc-o(n)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        int flag=0;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                 ans.push_back(i);
                 flag=1;
                 break;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(nums[j]==target){
                ans.push_back(j);
                break;
            }
        }
        if(flag==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};

//optimal  tc-o(log(n)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        if(find(nums.begin(),nums.end(),target)!=nums.end()){
        int first=(lower_bound(nums.begin(),nums.end(),target)-nums.begin());
        int second=(upper_bound(nums.begin(),nums.end(),target)-nums.begin());
        ans.push_back(first);
        ans.push_back(second-1);
        return ans;
        }
        else{
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
    }
};