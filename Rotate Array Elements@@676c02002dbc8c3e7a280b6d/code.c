#include<stdio.h>
void rot(int arr[N],a,b){
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
    k = k % n;
    rot(arr,0,n-1);
    rot(arr,0,k-1);
    rot(arr,k,n-1);
    for(int i=0;i<=N-1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}