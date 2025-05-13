#include<stdio.h>

void Dispaly(int iNo)
{
    if(iNo >= 0 && iNo < 10)
    {
        if(iNo == 0)
        {
            printf("Zero");
        }
        else if(iNo == 1)
        {
            printf("One");
        }
        else if(iNo == 2)
        {
            printf("Two");
        }
        else if(iNo == 2)
        {
            printf("Three");
        }
        else if(iNo == 3)
        {
            printf("Four");
        }
        else if(iNo == 4)
        {
            printf("Five");
        }

        else if(iNo == 5)
        {
            printf("Six");
        }
        else if(iNo == 6)
        {
            printf("Seven");
        }
        else if(iNo == 7)
        {
            printf("Eight");
        }
        else if(iNo == 9)
        {
            printf("Nine");
        }
    }
    else
    {
        printf("Enter valid number.");   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Dispaly(iValue);

    return 0;
}