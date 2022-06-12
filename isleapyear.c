#include<stdio.h>

int main(int argc,char** argv[])
{

    if( atoi(argv[1])%4==0 && (atoi(argv[1])%100 !=0 || atoi(argv[1])%400 == 0))
        printf("%d%s", atoi(argv[1]), " was a leap year");
    else {
        printf("%d%s", atoi(argv[1]), " was not a leap year");
    }
    return 0;
}

