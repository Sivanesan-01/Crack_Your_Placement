//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size();
	    int c=0;
	    vector<pair<int, int>> v;
	    for(int i=0;i<n;i++){
	        v.push_back({nums[i],i});
	    }
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<n;i++){
	        if(v[i].second != i){
	            c++;
	            swap(v[i],v[v[i].second]);
	            i--;
	        }
	    }
	    return c;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
