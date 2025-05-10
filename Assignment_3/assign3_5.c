#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckCase(int cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
       {
            return TRUE;
       }

    return FALSE;
}

int main()
{
    char cValue = 'A';
    BOOL bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = CheckCase(cValue);

    if(bRet == TRUE)
    {
        printf("%c is vowel",cValue);
    }
    else 
    {
        printf("%c is not vowel",cValue);
    }


    return 0;
}