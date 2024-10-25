#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
    printf("real and imaginary");
    r1=-b+sqrt(d)/(2*a);
     r1=-b-sqrt(d)/(2*a);
     printf("r1 and r2 values");
     scanf("%f%f",&r1,&r2);
}
         else if(d<0)
         {
             printf("real and imaginary");
}
else
{
    printf("roots are real and eqal");
    r1=r2=-b/(2*0);
    printf("r1 and r2 values are %2f%2f",r1,r2);
}
return 0;
}
