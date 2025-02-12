#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        printf("%d x %d = %d",N,i,N*i);
    }
    return 0;
}