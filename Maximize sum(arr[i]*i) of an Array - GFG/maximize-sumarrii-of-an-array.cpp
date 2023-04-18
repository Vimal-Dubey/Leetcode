//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    #define mod 1000000007

 
    int Maximize(int arr[],int n)
    {
        // Complete the function
        long long ans = 0;
    sort(arr, arr + n);
    for(int i = 0; i < n; i++) {
        ans = (ans + (long long)arr[i] * i) % mod;
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends