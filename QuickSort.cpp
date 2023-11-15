#include <bits/stdc++.h> 

int partition(vector<int>& arr, int s, int e){
    int pivot = arr[s];

    int count=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot) count++;
    }

    //place pivot to the right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //left and right part
    int i=s, j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void solve(vector<int>& arr, int s, int e){
    //base case
    if(s>=e) return;

    //partition
    int p = partition(arr, s, e);

    //left part sorting
    solve(arr, s, p-1);

    //right part sorting
    solve(arr, p+1, e);
}

vector<int> quickSort(vector<int> arr)
{
    solve(arr, 0, arr.size()-1);
    return arr;
}
