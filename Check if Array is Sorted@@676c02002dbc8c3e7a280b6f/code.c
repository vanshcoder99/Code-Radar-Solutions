#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d ",&N);
    }
    int sort = 1;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]>arr[j]){
                sort = 0;
                break;
            }
        }
    }
    if(sort){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}