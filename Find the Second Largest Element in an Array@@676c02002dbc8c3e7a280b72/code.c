#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int flag = 1;
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<N;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        }
    }
    if(smax==INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",smax);
    }

    return 0;
}