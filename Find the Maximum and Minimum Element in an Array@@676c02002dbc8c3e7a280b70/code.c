#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[1];
    int max = arr[1];
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<N;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}