#include<iostream>
#include <bits/stdc++.h>
#include<string>

using namespace std;


void printallsub ( string, string );

int main(){

    string n,o = "";
    
    cin >> n;

    printallsub(n,o);

    return 0;
}

void printallsub(string input, string output ){

if(input.empty()){
    cout<< output << endl;
    return;
}
printallsub(input.substr(1), output+input[0]);
printallsub(input.substr(1), output);

}