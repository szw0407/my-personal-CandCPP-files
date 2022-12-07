#include <stdio.h>
#include <stdlib.h>

//#define num 11

//↑↑for some reason, VS (cl.exe) DO NOT support VLA, so change the size here↑↑.
//To make it better, MALLOC() is a nice choice.

#define TRUE 1
#define FALSE 0

void IntSwap(int *,int *);

int m=0;
//this m is to count times of swap

int main()
{
    
//    int a,b;
//    printf("input 2 integers below:\n");
//    scanf("%d %d",&a,&b);
//    int *adda;
//    int *addb;
//    adda=&a;
//    addb=&b;
//    printf("Now, the address of A is %d;\n And the address of B is %d",adda,addb);
//    指针测试

    printf("How many integers are to be inputed?\n");
    int num;
    scanf("%d",&num);
    int s[num];
    int i=0;
    printf("Input the %d numbers below:\n",num);
    for (i=0;i<num;i++){
        scanf("%d",&s[i]);
        printf("%d/%d inputed.\n",i+1,num);
        }
    void TidyUp(int [],int);
    /*now the primary prepared*/
    TidyUp(s,num);
    printf("\n\n after %d times:\n",m);
    for (i=0;i<num;i++)
        printf("%d  ",s[i]);
    printf("\n");
    return 0;
}

void IntSwap(int *shuzijiadizhi, int *shuziyidizhi)
{
    int c;
    c=*shuzijiadizhi;
    *shuzijiadizhi=*shuziyidizhi;
    *shuziyidizhi=c;
    m++;
}

void TidyUp(int k[], int p)
{
    void SelectionSort(int [],int);
    void BubbleSort(int [],int);
    void QuickSort(int [],int,int);
    int ipt;
    printf("input 1 to start Selection Sort\n");
    printf("or 2 to start BubbleSort\n");
    printf("or 3 to start QuickSort\n");
    scanf("%d",&ipt);
    switch (ipt)
    {
        case 1:
            SelectionSort(k,p);
            break;
        case 2:
            BubbleSort(k,p);
            break;
        case 3:
            QuickSort(k,p-1,0);
            break;
        default:
            printf("error:Your input is %d, which is invalid.\nPLEASE ",ipt);
            TidyUp(k,p);
    }
}

void SelectionSort(int k[], int p)
{
    printf("OK");
//    IntSwap(&k[1],&k[9]);
    int tmp;
    int j;
    int i;
    for(j=0;j<p;j++)
    {
        tmp=j;
        for(i=j+1;i<p;i++)
        {
            if (k[i]<k[tmp])
                tmp=i;
        }
        if (tmp !=j)
            IntSwap(&k[j],&k[tmp]);
    }
}

void BubbleSort(int k[],int p)
{
    printf("OK");
    int i,j,mark;
    mark=FALSE;
    for (i=p-1;i>0;i--){
        if (mark==TRUE)
            break;
        mark=TRUE;
        for (j=0;j<=(i-1);j++)
        {
            if (k[j]>k[j+1])
            {
                IntSwap(&k[j+1],&k[j]);
                mark=FALSE;
            }
        }
    }
}

void QuickSort(int k[],int tot,int frm)
{
    void over_write(int *,int *);
    int l,r,tmp;
    tmp=k[frm];
    l=frm;
    r=tot;
    while(l<r)
    {
        while (k[r]>=tmp && l<r){
            r--;
        }
        if (l<r){
            over_write(&k[l],&k[r]);
            l++;
        }
        while (tmp>=k[l] && l<r){
            l++;
        }
        if (l<r){
            over_write(&k[r],&k[l]);
            r--;
        }
    }
    if (l>r){
        printf("\n\nSORRY! An Error Occurred And The Program Cannot Return a Correct Result.");
    }
        //useless judge
    over_write(&k[l],&tmp);
    if (frm<l)
        QuickSort(k,l-1,frm);
    if (tot>l)
        QuickSort(k,tot,l+1);
}

void over_write(int *beifugai, int *fugai)
{
    *beifugai=*fugai;
    m++;
}
