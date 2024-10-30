#include<stdio.h>
void main()
{
    char ch;
    printf("enter letter");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case '0':
        case 'O':
        case 'u':
        case 'U':
        printf("%c is not constant,if vowel",ch);
        break;
        default: printf("%c is a constant",ch);
        break;
    }
}
