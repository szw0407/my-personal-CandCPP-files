#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TRUE 1
#define FALSE 0


int main()
{
    printf("Hello world!\nInput a string below:\n");
    char a[100]={};
    gets(a);
    int i=0;
    while (a[i]!=0)
        i++;
    printf("in string A, i=%d\n",i);
    /*above is to count the length of a*/
    int getlin(char []);
    i=getlin(a);
    printf("%s  %d",a,i);
    return 0;
}

int getlin(char sth[])
{
    int i=0;
    char c;
    while(i<100 && (c=getchar()) != '\n')
    {
        sth[i]=c;
        i++;
    }
    sth[i]='\0';
    return i;
}
