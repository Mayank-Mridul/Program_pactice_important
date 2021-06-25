#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int start, int end){

    int count = 0, lol1 = arr[start];

    for(int i = start+1; i<end ; i++){
    if(lol1>arr[i])
    count += 1;
    }

    int lol = arr[start+count];

    swap(arr[start], arr[start+count]);

    int i = start, j = end;

    while(j!= lol || i!=lol){
        if(arr[i]<lol)
        i++;
        else if(arr[j]>lol)
        j--;
        else
        swap(arr[i],arr[j]);
        i++;
        j++;
    }

    return start+count;
}


void quick_sort( int arr[], int start, int end){

    int c = partition(arr,start,end);

    quick_sort(arr, start, c-1);
    quick_sort(arr, c+1, end);

}

int main(){

    int n;

    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

    quick_sort(arr,0,n);

    return 0;
}