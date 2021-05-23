#include<iostream>
#include <bits/stdc++.h>
#include<string>

using namespace std;

int subwithbinary(string);

int main(){

    string s;

    cin >> s;

    cout << subwithbinary(s);

    return 0;
}

int subwithbinary(string s){

int n = s.length();


int count0 = 0, count1 = 0, ans = 0;

for(int i = 0; i<n ; i++){

    if(s[i] == '0')
    count0++;
    else
    count1++;

    if(count0 == count1)
    ans++;


}

if(count0!=count1)
return -1;
else
return ans;


}