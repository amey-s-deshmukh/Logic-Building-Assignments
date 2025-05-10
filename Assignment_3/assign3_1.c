#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;
    int iNum = 0;
    iNum = 2;
    
    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        if(iNum % 2 == 0)
        {
            printf("%d\n",iNum);
        }
        iNum = iNum + 2;
    }
    

}

int main()
{
    int iValue1 = 0;


    printf("Enter the number : ");
    scanf("%d",&iValue1);

    Display(iValue1);
    
    return 0;
}