#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int *i;
    float d=0;
    while(i=malloc(1*1024*1024)){
        d+=1;
        printf("%.0fMB\n", d);
    }
    printf("\n\ntotal:\n%.5fGB",d/1024);
    free(i);
    return 0;
}
