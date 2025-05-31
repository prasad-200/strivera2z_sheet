
my solution tc- takes 0(n2) sc-0(1) not accepted (time limit exceeded)
class Solution {
    public:
        void rotateArray(vector<int>& nums, int k) {
           for(int i=1;i<=k;i++){
            int temp=nums[0];
            int j;
            for(j=0;j<nums.size()-1;j++){
                 nums[j]=nums[j+1];
            }
            nums[j]=temp;
           }
        }
    }
    

brute force -using a temp array 
    tc-o(3n)
    sc-0(n)
class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
    
            int n=nums.size();
            k=k%n;
            vector<int>temp(n);
    
            for(int i=0;i<k;i++){
                temp[i]=nums[(n-1)-(k-1)+i];
            }
            
            for(int i=k;i<n;i++){
                temp[i]=nums[i-k];
            }
            
            for(int i=0;i<n;i++){
                nums[i]=temp[i];
            }
        }
    };

optimal approch (revering the array)
tc-0(3N)
sc-(o(1))
class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
    
            int n=nums.size();
            k=k%n;
            int temp=0;
            // reverseing the array 
            for(int i=0;i<n/2;i++){
                temp=nums[n-1-i];
                nums[n-1-i]=nums[i];
                nums[i]=temp;
            }
            //revering the first part 
           for(int i=0;i<k/2;i++){
                temp=nums[k-1-i];
                nums[k-1-i]=nums[i];
                nums[i]=temp;
            }
            //reversing the second
            for(int i=k;i<((n+k)/2);i++){
                temp=nums[n-1-(i-k)];
                nums[n-1-(i-k)]=nums[k+(i-k)];
                nums[k+(i-k)]=temp;
            }
    
        }
    };