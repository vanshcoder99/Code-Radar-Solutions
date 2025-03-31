void bubbleSort(int arr[],int n){
    int swapped;
    for(int i=0;i<N-1;i++){
        swapped = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
    }
    if(swapped==0){
        return;
    }
}