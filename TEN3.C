#include<stdio.h>
#include<conio.h>
main()
{
    clrscr();
    int num, count=1;
    printf("neter number\n*");
    scanf("%d",&num);
    printf("\nmultipletion table for");
    while(count<=10)
    {
	printf("%d*%d=%d\n",num,count);
	count++;
    }
    getch();
}

