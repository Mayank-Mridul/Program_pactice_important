#include<iostream>
#include <bits/stdc++.h>
#include<string>

using namespace std;


vector<string> findallpermu(string);

int main(){

    string s;
    vector<string> ans;
    cin >> s;

    ans = findallpermu(s);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i];
    }
    return 0;
}

vector<string> findallpermu(string s){

vector<string>ans;
sort(s.begin(),s.end());
ans.push_back(s);
while(next_permutation(s.begin(),s.end()))
ans.push_back(s);

return ans;
}
