// #include<iostream>
// #include <bits/stdc++.h>
// #include<string>

// using namespace std;

// string longestPalin(string);

// int main(){

//     string s = "";
//     cin >> s;
//     longestPalin(s);
//     return 0;
// }

// string longestPalin( string s){

// string copy = "", ans = "";

// int i = 0, j = 0;

// int len = s.length();

// for(int i = 0; i<len ; i++ ){
//     copy[len-1-i] = s[i];
// }

// string fans = "";

// for(int i = 0 ; i<len ; i++){
//     for(int j = 0; j<len ; j++){

//         if(s[i] == copy[j]){
//             ans += s[i];

//             int p = i+1, q = j+1;
//             while(p<s.length()){

//                 if(s[p] == copy[q]){
//                 ans += s[p];
//                 p++;
//                 q++;
//                 }
//                 else{
//                 break;
//                 }

//             }

//         }
//     }

//     if(ans.length() > fans.length()){
//         fans = ans;
//     }

// }


// if(fans.length() == 1)
// fans = s[0];


// return fans;

// }