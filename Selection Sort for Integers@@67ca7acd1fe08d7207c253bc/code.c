void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int si = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[si];
        arr[si] = temp; 
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}