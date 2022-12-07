#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Hello world!\n");
    struct Date
    {
        int year;
        int month;
        int day;
    };
    typedef struct Date DT;
    DT dt[100];
    int i;
    for (i=0;i<3;i++)
    {
        scanf("%d/%d/%d",&dt[i].year,&dt[i].month,&dt[i].day);

    }
    printf("%d  %d  %d",dt[2].year,i,100);
    return 0;
}
