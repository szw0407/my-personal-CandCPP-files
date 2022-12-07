#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char str[80]={};
    int num;
    FILE *inFile;
    inFile = fopen("D:/114514/data/1.txt","r");
    FILE *outFile;
    outFile = fopen("D:/114514/data/o.log","r");
    if (outFile!=NULL){
        printf("ERROR! Input 1 to overwrite,OTHERS end");
        if (scanf("%d",&num)==1)
            ;
        else
            exit(1);
    }
    fclose(outFile);
    outFile = fopen("D:/114514/data/o.log","w");
    if (inFile==NULL)
    {
        printf("ERROR! open directory D:/114514/data/ failed!");
        exit(1);
    }
    int i=0;
    while (fscanf(inFile, "%s %d",str,&num) != EOF)
    {
        //fscanf(inFile, "%s %d",str,num);
//        puts(str);
        fprintf(outFile,"%s%6d\n",str,num);
        i++;
    }

    return 0;
}
