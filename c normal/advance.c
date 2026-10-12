#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char str[30];
    fgets(str,sizeof(str),stdin);
    printf("%s\n",str);
    int len = strlen(str);
    printf("%d\n",len);
    char str2[30];
    strncpy(str2,str,30);  //strncpy(destination,source,n)
    //i havent still understood how does n limit and its variations
    printf("%s\n",str2);
    char str3[30] = "Hello";
    printf("%s\n",str3);
    strncpy(str3,str,30);
    printf("This is after strncpy  : %s\n",str3);
    strncat(str3,str,sizeof(str)-strlen(str)-1);//this is here i did this because
    //it was needing more chracter spaces it wass writing to those space
    //but i needed an limit because in append some spaces are already taken
    printf("%s this is after strncat\n",str3);
    int strc = strncmp(str,str2,30);
    int strc1 = strncmp(str,str3,30);
    //return positve if ascii of str 1 is higher then str2
    printf("%d %d",strc,strc1);
    return 0;
}