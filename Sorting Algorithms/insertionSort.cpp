void insertionSort(int n, vector<int> &arr){
    for(int i = 1; i<n; i++) {          // Start from 2nd element
        int temp = arr[i];              // Store current element to insert
        for(int j = i-1; j>=0; j--) {   // Compare with sorted portion
            
            if(arr[j] > temp) {
                //shift - move element right
                arr[j+1] = arr[j];
            }
            else { 
                // ruk jao (stop) - found correct position
                break;
            }
        }
        // Insert temp at correct position
        arr[j+1] = temp;  
    } 
}