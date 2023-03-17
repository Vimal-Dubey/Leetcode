//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &arr) {
    // Write your code here.
    long long ans = 0;
    long long count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
        else
        {
            count=(count*(count+1))/2;
            ans += count;
            count = 0;
        }
    }
    if(count > 0)
    {
        count=(count*(count+1))/2;
        ans += count;
    }
    return ans;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}

// } Driver Code Ends