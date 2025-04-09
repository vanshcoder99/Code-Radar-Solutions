#include<stdio.h>
int main(){
    char str[20],rtr[20];
    fgets(str,20,stdin);
    int k = 0;
    while(str[k]!='\0'){
        k++;
    }
    int i = 0;
    int j = k-1;
    while(int i<=j){
        char temp = str[i];
        rtr[i] = rtr[j];
        rtr[j] = temp;
        i++;
        j--;
    }
    if(str = rtr){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}