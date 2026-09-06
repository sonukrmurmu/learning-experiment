#include <stdio.h>
#include <stdlib.h>
int increment(void);
extern int var;
int value;
int main()
{
    value = increment();
    value = increment();
    value = increment();
    printf("%d\n",value);
    printf("%d\n",var);
    return 0;
}