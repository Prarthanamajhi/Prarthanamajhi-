#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum =0,r;
    printf("enter the number");
    scanf("%d",&n);
do
{
    r=sum+n%10;
    n=n/10;
sum=sum+r;
} 
while (n==0);
printf("sum=%d\n",sum);
return 0;



    
}