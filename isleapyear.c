#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter year");
    scanf("%d", &year);

    if((year%4)==0)
    {

        if((year%100)!=0) || ((year%400)==0)
        {
            {
            printf("%d%s", year, " was a leap year");
            }

        }
    }
    printf("%d%s", year, " was not a leap year");

    return 0;

}
