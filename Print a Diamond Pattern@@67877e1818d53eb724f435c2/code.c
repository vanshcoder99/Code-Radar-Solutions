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
        nsp--;
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst+=2;
        if(i>N){
            nst-=2;
            nsp--;
            for(int i=1;i<=nsp;i++){
                printf(" ");
            }
            for(int j=1;j<=nst;j++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
 }