#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=i;j>=1;j--){
            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;
}