#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int nst = 1;
    int nsp = N-1;
    int ml = N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(ml>i){
            nst+=2;
            nsp--;
        }
        else{
            nst=-2;
            nsp++;
        }
        printf("\n");
    }
    return 0;
}