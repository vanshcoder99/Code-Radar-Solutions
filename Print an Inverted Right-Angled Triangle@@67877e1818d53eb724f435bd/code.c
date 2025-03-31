#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a = N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=a;j++){
            printf("* ");
            a--;
        }
        printf("\n");
    }
    return 0;
}