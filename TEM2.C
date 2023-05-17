#include<stdio.h>
#include<conio.h>
main()
{
    clrscr();
    int n,i,num=0;
    printf("enter a number");
    scanf("%d",&n);


    if(==0 && n==1)
    {
	printf("%d is not a prime number:-");
    }
    else
    {
	for (i=2,i<n/2;i++)
    {
	if(n%i==0)
	{
	    num=1;
	    break;
	}
    }
    if (num == 0)
    {
	printf("%d is prime number:-");
    }
    else
    {
	printf("%d is not prime number:-");
    }
  }
  getch();
}