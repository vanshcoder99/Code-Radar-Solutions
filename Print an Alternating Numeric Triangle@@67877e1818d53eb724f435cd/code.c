#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a;
    for(int i=1;i<+N;i++){
        if(i%2!=0)  a = 1;
        else a = 0;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            if(a==0) a = 1;
            else a = 0;
        }
        printf("\n");
    }
}