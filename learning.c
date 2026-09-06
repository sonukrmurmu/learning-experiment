int var=224;
int increment(void)
{
    static int count = 100;
    count=count+var;
    return count;
}