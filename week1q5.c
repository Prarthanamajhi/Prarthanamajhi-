#include<stdio.h>
#include<conio.h>
int main()
{ 
    int r,d=0;
    float c=0.0,a=0.0;
    printf("enter the radius");
    scanf("%d",&r);
    d=r*2;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("the diameter of the circle is=%d\n",d);
    printf("the circumference of the circle is=%f\n",c);
    printf("the area of the circle is=%f\n",a);
    return 0;


}