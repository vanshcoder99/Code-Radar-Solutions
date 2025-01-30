#include <stdio.h>
int main() {
    char name[],hob[];
    int age;
    scanf("%s %d",&name,&age);
    scanf("%s",hob);
    printf("Name: %s",name);
    printf("Age: %d",&age);
    printf("Hobby: %s",hob);
    return 0;
}