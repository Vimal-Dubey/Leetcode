//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string result = "";
    string word = "";
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '.') {
            // add the current word to the result
            result = word + "." + result;
            word = "";
        } else {
            // add the current character to the current word
            word += S[i];
        }
    }
    // add the last word to the result
    result = word + "." + result;
    // remove the extra dot at the end of the result
    result.erase(result.length() - 1, 1);
    return result;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends