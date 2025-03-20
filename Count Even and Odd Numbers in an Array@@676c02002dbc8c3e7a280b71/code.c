#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int ce = 0,co = 0;
    for(int i=0;i<N;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            ce++;
        }
        else{
            co++;
        }
    }
    printf("%d %d",ce,co);
    return 0;
}