#include <stdio.h>
int main()
{
    char name[50];
    printf("enter your name");
    scanf("%49s",&name);
    fgets(name,sizeof(name),stdin);
    printf("Hello %s\n",name);
    return 0;
}