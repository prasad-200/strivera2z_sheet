my approch 
like insertion sort
tc-o(n2)
sc-o(1)
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
          int n=nums.size();
         for(int i=0;i<n;i++){
            for(int j=i;j>0;j--){
                if((nums[j]!=nums[j-1]) && (nums[j-1]==0)){
                       nums[j-1]=nums[j];
                       nums[j]=0;
                }
            }
        }
        }
    };

brute force uses temp vector 
tc-o(n)
sc-o(n)
class Solution {
    public:
    
        void moveZeroes(vector<int>& nums) {
          int n=nums.size();
        
             vector<int>temp(n);
               int j=0;
               for(int i=0;i<n;i++){
                    if(nums[i]!=0){
                         temp[j++]=nums[i];
            }
           }
           if(n-j!=0){
            while(j<n){
                temp[j++]=0;
            }
           }
           for(int i=0;i<n;i++){
              nums[i]=temp[i];
           }
          }  
        };

optimal approach
optimal solution -tc-0(n)
sc-0(1)
2 pointer approch
class Solution {
    public:
    
        void moveZeroes(vector<int>& nums) {
          int n=nums.size();
          
          int i,j;
          j=-1;
    
          //find first index where we find the 0 element
          for(int i=0;i<n;i++){
            if(nums[i]==0){
            j=i;
            break;
            }
          }
          if(j==-1){
            return ;
          }
    //j always points a zero no and i finds a non zero number and swaps 
        for(i=j+1;i<n;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                nums[i]=0;
                j++;
            }
        }
     
          }  
        };
    

my approch 2:
perform swap operations the number of time there is 0 in the array
tc-o(n2)
sc-o(1)

class Solution {
    public:
    
        void moveZeroes(vector<int>& nums) {
          int n=nums.size();
          int count=0;
          for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
          }
    
          for(int i=0;i<=count+n;i++){
              for(int j=n-1;j>0;j--){
                if(nums[j-1]!=nums[j] && nums[j-1]==0){
                    nums[j-1]=nums[j];
                    nums[j]=0;
                }
              }
          }
        }
    };

