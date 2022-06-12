#include<stdio.h>

int main(int argc,char* argv[])
{
    if(argc%4==0 && (argc%100 !=0 || argc%400 == 0)
    {
        printf("%d%s", argc, " was a leap year");
    }
    printf("%d%s", argc, " was not a leap year");
    return 0;
}
