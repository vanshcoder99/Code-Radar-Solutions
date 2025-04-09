#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str,20,stdin);
    int k = 0;
    while(str[k]!='\0'){
        k++;
    }
    int i = 0;
    int j = k-1;
    int flag = 1;
    while(i<=j){
        if(str[i] != str[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}