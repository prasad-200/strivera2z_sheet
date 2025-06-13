
brute force-
tc-o(n)
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int i;
	 for(i=0;i<n;i++){
		 if(arr[i]>=x){
			 return i;
		 }
	 }
	 return i;
}

optimal solution 
tc-o(log(n))

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	//  Format: N = 5, arr[] = {3,5,8,15,19}, x = 9
    // Result: 3
    // Explanation: Index 3 is the smallesInputt index such that arr[3] >= x.
     int low =0;
	 int high=n-1;
	 int mid;
	 int ans=n;
    while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]>=x){
			ans=mid;
			high=mid-1;
		}
		else{
               low=mid+1;;
		}
}
return ans;
}

using cpp
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	//  Format: N = 5, arr[] = {3,5,8,15,19}, x = 9
    // Result: 3
    // Explanation: Index 3 is the smallesInputt index such that arr[3] >= x.
    int ans=(lower_bound(arr.begin(),arr.end(),x)-arr.begin());
    return ans;
}