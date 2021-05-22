// Program to Check if a string is a valid shuffle of two distinct strings

// 1XY2 is a valid shuffle of XY and 12
// Y12X is not a valid shuffle of XY and 12

#include <iostream>
#include <bits/stdc++.h>

#include <string>
using namespace std;

bool valid_shuffle(string,string,string);

int main(){

string s, t, m;

cin >> s;

cin >> t;

cin >> m;

cout << valid_shuffle(s,t,m);

return 0;
}

bool valid_shuffle(string first, string second, string result){


   // check length of result is same as
    // sum of result of first and second
    if(first.length() + second.length() != result.length()) {
      return false;
    }
    // variables to track each character of 3 strings
    int i = 0, j = 0, k = 0;

    // iterate through all characters of result
    while (k != result.length()) {

      // check if first character of result matches with first character of first string
      if (i < first.length() && first[i] == result[k])
        i++;

      // check if first character of result matches the first character of second string
      else if (j < second.length() && second[j] == result[k])
        j++;

      // if the character doesn't match
      else {
        return false;
      }

      // access next character of result
      k++;
    }

    // after accessing all characters of result
    // if either first or second has some characters left
    if(i < first.length() || j < second.length()) {
      return false;
    }

    return true;

}

