#include<stdio.h>
void rotate(int arr[],int N,int a,int b){
    int i = a;
    int j = b;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int N,K;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&K);
    rotate(arr,N,0,N-1);
    rotate(arr,N,0,K-1);
    rotate(arr,N,K,N-1);
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}