#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int s,int mid, int e){
    int i = s, j = e, k = 0;

    int temp[j-i+1];

    while(i<mid && j<=e){

        if(arr[i] <= arr[j])
        temp[k++] = arr[i++];
        else
        temp[k++] = arr[j++];
    }

    while(i<mid)
    temp[k++] = arr[i++];

    while(j<=e)
    temp[k++] = arr[j++];

    for(int i = s, k = 0; i<=e ; i++, k++){
        arr[i]  = temp[k];
    }


}


void merge_sort(int arr[] , int start , int end ){

    if(start >= end)
    return;


    int mid = (start + end)/2;

    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);

    merge(arr,start,mid,end);
}

int main(){

    int n;

    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

    merge_sort(arr,0,n);
    return 0;
}