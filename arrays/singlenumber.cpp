
brute force using hashmap
tc-o(nlogn+n)
sc-o(n)
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
           int n=nums.size();
        map<int,int>freq;
         for(int i=0;i<n;i++){
            freq[nums[i]]++;
         }
    
         for(int i=0;i<n;i++){
          if(freq[nums[i]]==1){
            return nums[i];
          }
        }
        return -1;  
        }
    };

optimal using xor 
tc-o(n)
sc-o(1)
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
           int n=nums.size();
            int x=0;
            for(int i=0;i<n;i++){
                x=x^nums[i];
            }
            return x;
        }
    };