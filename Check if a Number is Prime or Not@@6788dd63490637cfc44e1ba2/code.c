#include<stdio.h>
int main(){
    int x,flag = 0;
    scanf("%d",&x);
    for(int i = 2;i<=x/2;i++){
        if(x % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}