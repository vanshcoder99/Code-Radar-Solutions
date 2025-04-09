#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%[^\n]s",str);
    // fgets(str,20,stdin);
    int k = 0;
    int size = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    int i = 0;
    int j = size-1;
    while(i<=j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("%s",str);
    return 0;
}