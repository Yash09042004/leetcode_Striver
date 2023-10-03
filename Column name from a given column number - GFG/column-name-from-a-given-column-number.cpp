//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string yash  = "";
        while(n){
            char c = (char)('A' + (n-1)%26);
            yash+=c;
            n= (n-1)/26;
        }
        reverse(yash.begin(),yash.end());
        return yash;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends