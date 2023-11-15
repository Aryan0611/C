#include<stdio.h>
#include<stdlib.h>
main()
{

    int*p,n,i;
    n=5;
    p=(int *)malloc(n*(sizeof(int)));
    printf("enter the values\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);                                                                                                                                                                                                                                          );
    }
    free(p);
}

