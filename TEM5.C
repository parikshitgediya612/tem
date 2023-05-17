#include<stdio.h>
#include<conio.h>
main()
{
    clrscr();
    int n,r,sum=0,tem;
    printf("enter number");
    scanf("%d",&n);
    tem=n;
    while(n>0)
    {
	r=n%10;
	sum=(sum*10)+r;
	n/=10;
    }
    if(tem==sum)
    {
	printf("this is palidrone number");

    }
    else
    {
	printf("this is noy paldrone number");
    }
    getch();
}