#include<iostream>
#include <bits/stdc++.h>
#include<string>

using namespace std;

string count_n_say(int);

string convert(string);

int main(){

    int n;
    
    cin >> n;

    cout << count_n_say(n);

    return 0;
}

    string convert(string x)
    {   
        string s="";
        char curr=x[0];
        int count=0;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]==curr) count++;
            else
            {
                s+=to_string(count)+curr;
                curr=x[i];
                count=1;
            }
        }
        s+=to_string(count)+curr;
        return s;
    }

    string count_n_say(int n) {
       string ans="1";
        if(n==1) return ans;
        n--;
       while(n)
       {
         ans=convert(ans);
           n--;
       }
        return ans;
    }