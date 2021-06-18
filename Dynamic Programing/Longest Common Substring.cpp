// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        int t[1001][1001];
        
        for(int i = 0; i<n+1; i++){
            for(int j = 0; j<n+1 ; j++){
                if(i ==0 || j == 0)
                t[i][j] = 0;
            }
        }
        
        for(int i = 1 ; i<n+1 ; i++){
            for(int j = 1 ; j<m+1; j++){
                
                if(s1[i-1] == s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
                else
                t[i][j] = 0;
                
            }
        }
        
        int max = -1;
        
        for(int i = 0; i<n+1; i++){
            for(int j = 0; j<m+1; j++){
                
                if(t[i][j] > max)
                max = t[i][j];
                
            }
        }
        
        return max;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends