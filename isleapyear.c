#include<stdio.h>

int main(int argc,char* argv[])
{
    if((argc%4)==0)
    {
        if((argc%100)!=0) || if ((argc%400)==0)
        {
            printf("%d%s", argc, " was a leap year");
        }
    }
    printf("%d%s", argc, " was not a leap year");
    return 0;
}
