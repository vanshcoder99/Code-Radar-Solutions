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
        while(num !=0){
        int rev = 0;
        int rem;
        rem = num % 10;
        rev = rev + num;
        num = num / 10;
        }
        printf("%d",rev);
    }
    return 0;
}