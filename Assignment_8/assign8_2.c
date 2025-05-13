#include<stdio.h>

double RectArea(float fNo1, float fNo2)
{
    double dArea = fNo1 * fNo2;
    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;

    double dRet = 0.0;

    printf("Enter the width : ");
    scanf("%f",&fValue1);

    printf("Enter the height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("Area of rectangle is : %.3lf",dRet);

    return 0;
}