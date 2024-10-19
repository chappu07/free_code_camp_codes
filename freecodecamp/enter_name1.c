#include<stdio.h>
int main()
{
    char name[22];
    printf("enter the name:");
    fgets(name,22,stdin);
    printf("the name is %s",name);
    return 0;
}