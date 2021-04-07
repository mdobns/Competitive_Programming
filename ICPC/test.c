#include<stdio.h>
#include<conio.h>

main()
{
    int i,m,r=0,j=0,k=0;
    char data[100], hamming[100];

    printf("Enter data bits: ");
    gets(data);
    m=strlen(data);

    while(pow(2,r)<m+r+1)
    {
        r++;
    }
    printf("%d\n", r+m);
    for(i=0; i<m+r; i++)
    {
        if(i=pow(2,j))
        {
            //hamming[i]='0';
            printf("%d",i);
            j++;
        }/*
        else
        {
            hamming[i]=data[k];
            k++;
        }*/
    }

    printf("%s\n", hamming);
    printf("%d", strlen(hamming));


    return 0;
}
