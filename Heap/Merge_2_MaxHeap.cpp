#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int index, int size) {
    int largest = index;
    //1 based indexing 
    int left = 2*index;
    int right = 2*index + 1;

    if(left < size && arr[largest] < arr[left]) {
        largest = left;
    }

    if(right < size && arr[largest] < arr[right]) {
        largest = right;
    }

    if(largest != index) {
        swap(arr[index], arr[largest]);
        heapify(arr, largest, size);
    }
}

vector<int> mergeHeaps(vector<int> &arr1, vector<int> &arr2, int n, int m ) {
    vector<int> ans;
    
    for(auto a : arr1){
        ans.push_back(a);
    }
    for(auto b : arr2){
        ans.push_back(b);
    }

    int nums = ans.size();
    //from nums/2 to 0 are all non-leaf nodes
    for(int i = nums/2 ; i >= 0; i--) {
        heapify(ans, i, nums);
    }

    return ans;
}

int main() {
    vector<int> arr1, arr2;

    cout << "Enter the elements of first array (-1 to stop) : ";
    int temp;
    cin >> temp;
    while(temp != -1) {
        arr1.push_back(temp);
        cin >> temp;
    }

    cout << "Enter the elements of second array (-1 to stop) : ";
    cin >> temp;
    while(temp != -1) {
        arr2.push_back(temp);
        cin >> temp;
    }

    vector<int> result = mergeHeaps(arr1, arr2);

    cout << "Merged heap : ";
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}

/*
    42 37 35 25 29 21 -1 93 34 65 11 -1
*/ 