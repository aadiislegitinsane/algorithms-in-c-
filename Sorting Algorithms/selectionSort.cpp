#include<vector>
using namespace std;

/*
Selection Sort is a comparison-based sorting algorithm. 
It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion 
and swapping it with the first unsorted element. This process continues until the entire array is sorted.

time complexity : O(n^2) in all cases.
space complexity : O(1).
*/
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}