//brute force tc-o(n)
//sc-o(n)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
        int n=arr.size();
        for(int i=1;i<=10000;i++){
            if(find(arr.begin(),arr.end(),i)==arr.end()){
                ans.push_back(i);
            }
        }
        return ans[k-1];
    }
};

//better solution 
// tc-o(n)
// sc-o(n)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            //increament k as we find a number in the array less than k
            if(arr[i]<=k){
                k++;
            }
            //we encounter a number greater than 
            else{
            break;
        }
        }
        return k;
    }
};

//optimal o(log(n))

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int missing;
        while(low<=high){
            int mid=(low+high)/2;
            //calculate how many numbers are missing by doing number -(index+1)
            missing=arr[mid]-(mid+1);
            if(missing<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        //after this high and low point to the index between which the missing number is present
        // missing number can be found out by arr[high]+remain 
        //                                    arr[high]+k-(misssing)
        //                                      arr[high]+k-arr[high]+high+1 -> k+high+1 =k+low
        return low+k;
    }
};


