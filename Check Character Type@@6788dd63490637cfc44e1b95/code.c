#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o'){
            printf("Vowel");
            }       
        else{
            printf("Consonant");
            }
    }
    else if(ch>= 48 && ch<= 57){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return ;
}