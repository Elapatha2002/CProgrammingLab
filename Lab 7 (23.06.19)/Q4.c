#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a Character - ");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':printf("%c is a vowel \n",ch);break;
        default:printf("%c is consonant \n",ch);
    }
    return 0;
}
