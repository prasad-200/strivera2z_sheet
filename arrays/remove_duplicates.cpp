my approch takes -o(n2)
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int uniquecount=1;
            for(int i=0;i<nums.size();i++){
                 for(int j=i+1;j<nums.size();j++){
                    if(nums[j]>nums[i]){
                        nums[i+1]=nums[j];
                        uniquecount++;
                        break;
                    }
                 }
            }
            return uniquecount++;
        }
    };

bruteforce - using set datastructure
intertion in set takes log n 
overall tc- o(nlogn+n)


optimal approch --o(n) two pointer approach
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int uniquecount=1;
            int i=0;
                 for(int j=i+1;j<nums.size();j++){
                    if(nums[j]>nums[i]){
                        nums[i+1]=nums[j];
                        uniquecount++;
                        i++;
                    }
                 }
            
           
           return uniquecount;
        }
    };