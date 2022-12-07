#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    printf("Hello world!\n");
    int i;
    for (i=0;i<argc;i++){
        printf("%d:%s\n",i,argv[i]);
    }

    return 0;
}
