#include<stdio.h>
int revarr(int arr[],int N){
    int i=0;
    int j=N-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int y = revarr(arr,N);
    if(y){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}