#include<stdio.h>
int main(){
    int str[20];
    scanf("%[^\n]s",str);
    int k = 0;
    while(str[k]!='\0'){
        k++;
    }
    int i = 0;
    int j = k-1;
    while(i<j){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);
    return 0;
}