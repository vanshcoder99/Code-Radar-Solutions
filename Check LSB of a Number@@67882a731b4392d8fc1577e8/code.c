#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a&1){
        printf("Set");
    }
    else{
        printf("NOt Set");
    }
    return 0;
}