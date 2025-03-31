#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int nst = 1;
    int nsp = N-1;
    for(int i=1;i<=2*N-1;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<N){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}