#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        int num = arr[i];
        int rem,rev = 0;
        while(num !=0){
        rem = num % 10;
        rev = rev + rem;
        num = num / 10;
        }
        printf("%d ",rev);
    }
    return 0;
}