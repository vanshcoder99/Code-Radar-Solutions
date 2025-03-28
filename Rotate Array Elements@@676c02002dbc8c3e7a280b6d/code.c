#include<stdio.h>
void rot(int arr[],int a,int b){
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
    for(int i=0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&K);
    K = K % N;
    rot(arr,0,N-1);
    rot(arr,0,K-1);
    rot(arr,K,N-1);
    for(int i=0;i<=N-1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}