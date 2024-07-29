//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
         vector<vector<int>> result;
        set<vector<int>> uniquePermutations;
        
        // Sort the array to ensure we generate permutations in a sorted manner
        sort(arr.begin(), arr.end());
        
        do {
            uniquePermutations.insert(arr);
        } while(next_permutation(arr.begin(), arr.end()));
        
        // Convert the set to a vector
        for(const auto& perm : uniquePermutations) {
            result.push_back(perm);
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
