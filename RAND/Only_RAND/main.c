#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int num;
    printf("input ant integer:\n");
    scanf("%d",&num);
    srand(time(NULL));
    int r;
    int i,j;
    for (i=0;i<num;i++){
        r=1+(int)(rand()%15);
        int l[6];
        void l_go(int []);
        l_go(l);
        for (j=0;j<6;j++)
        {
            printf("%4d  ",l[j]);
        }
        printf("%7d\n",r);
    }
    return 0;
}

void l_go(int x[])
{
    int i,j,eq;
    for (i=0;i<6;i++)
    {
        eq=TRUE;
        while (eq==TRUE){
            eq=FALSE;
            x[i]=1+(int)(rand()%36);
            for (j=0;j<i;j++)
            {
                if (x[i]==x[j])
                    eq=TRUE;

            }
        }

    }

    //lottery prepared to be sorted
    void intswap(int *, int *);
    eq=FALSE;
    for (i=5;i>0;i--){
        eq=TRUE;

        for (j=0;j<i;j++)
        {
            if (x[j]>x[j+1]){
                intswap(&x[j],&x[j+1]);
                eq=FALSE;
            }
        }
        if (eq==TRUE)
            break;
    }
}

void intswap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
