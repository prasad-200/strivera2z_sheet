brute force -like linear search


optimal force approach-
tc-log(n)
int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.

	int low=0;
	int high=n-1;
    int mid;
	int ans=n;

	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]>x){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int ans=(upper_bound(arr.begin(),arr.end(),x)-arr.begin());