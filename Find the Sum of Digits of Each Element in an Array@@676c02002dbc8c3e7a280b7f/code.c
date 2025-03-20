#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[N]);
    }
    for(int i=0;i<N;i++){
        int num = arr[i];
        int rev = 0;
        num = num % 10;
        rev = rev + num;
        printf("%d",rev);
    }
    return 0;
}