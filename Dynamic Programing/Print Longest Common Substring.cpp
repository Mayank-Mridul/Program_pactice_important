// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence




class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.

    // TOP DOWN APPROACH

    string lcs(int x, int y, string s1, string s2)
    {
        int t[1001][1001];

        for(int i = 0; i<x+1 ; i++){
            for(int j = 0; j<y+1 ; j++){
                if(i == 0 || j == 0)
                    t[i][j] = 0;
            }
        }


      for(int i = 1; i<x+1 ; i++){
      for(int j = 1; j<y+1 ; j++){

        if(s1[i-1] == s2[j-1])
        t[i][j] = (1+ t[i-1][j-1]);
        else
        t[i][j] = max(t[i-1][j],t[i][j-1]);

      }
      }

    stack <char> s;

    int i = x+1, j = y+1;

    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            s.push(s1[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1] > t[i-1][j])
            i--;
            else
            j--;
        }
    }

    string ans;
    int q = 0;
    while(!(s.empty())){
        ans[q] = s.top();
        s.pop();
        q++;
    }
    ans[q] = '\0';
     // reverse(s.begin(), s.end());
      return ans;
    }
};


// RECURSIVE + MEMORIZATION


// static int t[1001][1001];

// class Solution
// {
//     public:
//     //Function to find the length of longest common subsequence in two strings.
//     int lcs1(int x, int y, string s1, string s2)
//     {
//         if(x == 0 || y == 0)
//         return 0;

//         if(t[x][y]!=-1)
//         return t[x][y];

//         if(s1[x-1] == s2[y-1])
//         return t[x][y] = (1+ lcs1(x-1,y-1,s1,s2));
//         else
//         return t[x][y] = max(lcs1(x-1,y,s1,s2),lcs1(x,y-1,s1,s2));
//     }

//     int lcs(int x, int y, string s1, string s2){
//         memset(t,-1,sizeof(t));
//         return lcs1(x,y,s1,s2);
//     }
// };


// { Driver Code Starts.
int main()
{
        int x,y;
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;

    return 0;
}
  // } Driver Code Ends
