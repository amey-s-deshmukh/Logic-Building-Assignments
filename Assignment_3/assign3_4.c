#include<stdio.h>

char CheckCase(int cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
    }


    return cValue;
}

int main()
{
    char cValue = 'A';
    char cRet = 'A';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    cRet = CheckCase(cValue);

    printf("The character is : %c",cRet);

    return 0;
}