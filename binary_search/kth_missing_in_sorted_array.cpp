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
            if(arr[i]<=k){
                k++;
            }
            else{
            break;
        }
        }
        return k;
    }
};