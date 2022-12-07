#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i;
    int a[100];
    for (i=0;i<100;i++)
    {
        a[i]=1;
    }
    srand((unsigned)time(NULL));
    i=rand();
    printf("from 0 to %d a random integer i=%d",RAND_MAX,i);
    return 0;
}
