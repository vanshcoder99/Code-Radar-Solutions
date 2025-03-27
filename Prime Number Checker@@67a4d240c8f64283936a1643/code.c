#include<stdio.h>
int isPrime(num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            break;
            return 0;
        }
    }
    return 1;

}
int main(){
    int t;
    scanf("%d",&t);
    while(t==0){
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));
    }
    return 0;
}