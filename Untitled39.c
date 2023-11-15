#include<stdio.h>
    int *p1,*p2,*p3;
    int i=10,j=12;
    int a[5]={10,20,30,40,50};
    main()
    {
        int m,n,x,y,z;
        p1=&i;
        p2=&j;
        p3=&a[1];
        p3=p3+3;
        printf("%d",*p3);
    }

