#include <stdio.h>
int main() {
    char name[15],hob[15];
    int age;
    scanf("%s %d\n",name,&age);
    scanf("%s",hob);
    printf("Name: %s\n",name);
    printf("Age: %d\n",&age);
    printf("Hobby: %s\n",hob);
    return 0;
}