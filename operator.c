#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter a,b values and op");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+': printf("the addition is %d",a+b);
        break;
        case '-': printf("the substraction is %d",a-b);
        break;
        case '*': printf("the multiplication is %d",a*b);
        break;
        case '/': printf("the division is %d",a/b);
        break;
        case '%': printf("the reminder is %d",a%b);
        break;
        default:printf("invallid operator");
        break;
    }
}
