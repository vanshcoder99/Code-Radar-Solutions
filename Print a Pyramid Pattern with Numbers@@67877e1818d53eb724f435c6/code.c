#include<stdio.h>
int main(){
    int N;
    int nsp = N-1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}