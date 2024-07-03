#include<stdio.h>
#include<conio.h>
int main()
{
    int n,d,sum=0;
   
    printf("Please enter a number:\n");
    scanf("%d",&n);
    printf("Entered number is: %d\n",n);
    while(n>0)
    {
        d=n%10;
        sum=sum*10+d;
        n=n/10;

    }
    printf("Reverse of entered number is: %d", sum);
}