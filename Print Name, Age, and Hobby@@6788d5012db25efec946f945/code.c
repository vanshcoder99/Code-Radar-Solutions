#include <stdio.h>
int main() {
    char name[15],hob[15];
    int age;
    scanf("%s %d\n",name,&age);
    scanf("%s",hob);
    printf("Name: %s",name);
    printf("Age: %d",&age);
    printf("Hobby: %s",hob);
    return 0;
}