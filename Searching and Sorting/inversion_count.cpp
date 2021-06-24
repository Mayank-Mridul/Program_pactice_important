#include <bits/stdc++.h>

using namespace std;


long long merge(int a[], int left, int mid, int right){
    int i = left, j = mid, k = 0;

    int temp[right-left+1];
    long long count = 0;
    while(i<mid && j<=right){
        if(a[i] <= a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
            count += mid-1;
        }
    }

    while(i<mid)
    temp[k++] = a[i++];

    while(j<=right)
    temp[k++] = a[j++];

    for(int i = left, k = 0; j <= right ; i++,k++){
        a[i]  = temp[k];
    }

    return count;
}

long long merge_sort(int a[], int left, int right){

    long long count = 0;

    if(right>left){

        int mid = (right+left)/2;

        long long count_left = merge_sort(a,left,mid);
        long long count_right = merge_sort(a,mid+1,right);
        long long my_count = megre(a,left,mid+1,right);

        return my_count+count_left+count_right;

    }


    return count;
}

long long solve (int a [] , int n){

    long long ans = merge_sort(a,0,n-1);
    return ans;
}

int main(){

    int n;

    cin >> n;

    int a[n];

    cout << solve(a,n);

    return 0;
}