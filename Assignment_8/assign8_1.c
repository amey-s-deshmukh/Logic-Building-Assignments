#include<stdio.h>

#define PI 3.14

double CircleArea(float fNo)
{
    double dArea = fNo * fNo * PI;
    return dArea;
}


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter number : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %.4lf" , dRet);

    return 0;

}