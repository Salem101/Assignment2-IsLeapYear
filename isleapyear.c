#include<stdio.h>

int main(int argc,char* argv[])
{

    if(argv[1]%4==0 && (argv[1]%100 !=0 || argv[1]%400 == 0))
    {
        printf("%d%s", argv[1], " was a leap year");
    }
    else {
        printf("%d%s", argv[1], " was not a leap year");
    }
    return 0;
}

