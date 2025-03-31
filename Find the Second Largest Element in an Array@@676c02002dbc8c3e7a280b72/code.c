#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int flag = 1;
    int max = arr[0];
    int smax = arr[0];
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<N;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        }
        else{
            flag = 0;
        }
    }
    // if(flag==1){
        printf("%d",smax);
    // }
    // else{
    //     printf("-1");
    // }
    return 0;
}