#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter your a angle");
scanf("%d",&a);
printf("Enter your  b angle");
scanf("%d",&b);
printf("Enter your c angle");
scanf("%d",&c);
if (a+b+c==180)
{
printf("it is a  triangle");
}
else if (a==0)
{
printf ("it is  not a triangle");
}
else if (b==0)
{
printf ("it is  not a triangle");
}
else if (c==0)
{
printf ("it is  not a triangle");
}

else
{
printf("it is not a  triangle");
}
}

